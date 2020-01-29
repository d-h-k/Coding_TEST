#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <cstring>
#include <string>
#include <queue>
#include <map>
#include <stack>
using namespace std;

string bin[] = { "0000","0001","0010","0011","0100","0101","0110","0111","1000","1001","1010","1011","1100","1101","1110","1111"};
string target[10] = { "211","221","122","411","132","231","114","312","213","112" };

string conv(string s) {
    string re="";
    int num;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 65) {
            num = s[i] - 55;
        }
        else {
            num = s[i] - '0';
        }
        re += bin[num];

    }
    return re;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("sample_input.txt", "r", stdin);

    int t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++) {
        int ans = 0;
        ///////////////////////
        int n, m;
        cin >> n >> m;
        //��ȣ�ڵ� �����(�ߺ����ֱ�)
        vector<string> vs;
        vector<string> univers;
        for (int i = 0; i < n; i++) {
            string str;
            cin >> str;
            int uniflag = 1;
            for (int u = 0; u < univers.size(); u++) {
                if (str == univers[u]) {
                    uniflag = 0;
                    break;
                }
            }
            if (uniflag==0) {
                continue;
            }
            univers.push_back(str);
            //2������ ���� �ٲ۴�.
            string trans = conv(str);
            //���ӵ� 1 ��������
            int cnt = 0;
            int cntzero = 0;
            vector<int> vi;
            for (int j = 0; j < trans.size(); j++) {
                if (trans[j] != '0') {
                    vi.push_back(cntzero);
                    cntzero = 0;
                    while (j < trans.size() && trans[j] != '0') {
                        cnt++;
                        j++;
                    }
                    cntzero++;
                    vi.push_back(cnt);
                    cnt = 0;
                }
                else{
                    cntzero++;
                }
            }
            if (vi.empty()) {
                continue;
            }
            
            
            
            vector<int> numbers;
            //4��=����1�� , 32��=����8��=��ȣ�ڵ�1��
            for (int j = 0; j <= vi.size(); j+=4) {
                if ( (j!=0 && j % 32 == 0) || j==vi.size()) {
                    string tmp = "";
                    for (int k = 0; k < numbers.size(); k++) {
                        tmp += to_string(numbers[k]);
                    }
                    int flag = 1;
                    for (int k = 0; k < vs.size(); k++) {
                        if (tmp == vs[k]) {
                            flag = 0;
                            break;
                        }
                    }
                    if (flag) {
                        vs.push_back(tmp);
                        int oddsum = 0;
                        int evensum = 0;
                        int last = numbers[7];
                        for (int k = 0; k < 7; k++) {
                            if (k % 2 == 0) {
                                oddsum += numbers[k];
                            }
                            else {
                                evensum += numbers[k];
                            }
                        }
                        int test = oddsum * 3 + evensum + last;
                        if (test % 10 == 0) {
                            ans += oddsum + evensum + last;
                        }
                    }
                    if (j == vi.size())
                        break;
                    numbers.clear();
                }
                int a = vi[j + 1];
                int b = vi[j + 2];
                int c = vi[j + 3];
                //a,b,c�� ���� �������� �����ش�
                int mini = min({ a, b, c });
                a /= mini;
                b /= mini;
                c /= mini;
                string find = "";
                find += '0'+ a;
                find += '0' + b;
                find += '0' + c;
                //cout << find << ' ';
                for (int k = 0; k < 10; k++) {
                    if (find == target[k]) {
                        numbers.push_back(k);
                        break;
                    }
                }
            }

        }

        //////////////////////
        cout << '#' << tc << ' ' << ans << '\n';
    }
    return 0;
}
