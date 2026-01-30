// //*    1/1^1 + 1/2² + 1/3³ + ... + 1/nⁿ

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     float sum = 0;
//     cout << "Enter a number : ";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         float mul = 1;
//         for (int j = 1; j <= i; j++)
//         {
//             mul *= i;
//         }
//         sum += 1 / mul;
//     }

//     cout << sum << endl;

//     return 0;
// }

//* task 2 : (1 × 1) + (2 × 2) + ... + (n × n)

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     float sum = 0;
//     cout << "Enter a number : ";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         sum += (i * i);
//     }
//     cout << sum << endl;
//     return 0;
// }

// Task 3 : (1) + (1+2) + (1+2+3) + ... + (1+2+...+n)

// #include <iostream>
// using namespace std;

// int sum(int n)
// {
//     int ans = 0;
//     if (n == 1)
//         return 1;
//     for (int i = 1; i <= n; i++)
//         ans += i;
//     return ans + sum(n - 1);
// }

// int main()
// {
//     int n;
//     cout << "Enter a number : ";
//     cin >> n;
//     cout << sum(n);
//     return 0;
// }

// Task 4 : 1 - x²/2! + x⁴/4! - x⁶/6! + ... up to n terms
//          1 - 2 + 16/24

// #include <iostream>
// using namespace std;

// int power(int b, int p)
// {
//     int mul = 1;
//     for (int i = 1; i <= p; i++)
//         mul *= b;

//     return mul;
// }

// float factorial(int n)
// {
//     float mul = 1;
//     for (int i = n; i >= 1; i--)
//         mul *= i;//3*2*1

//     return mul;
// }

// int main()
// {
//     int n, x;
//     int count = 0;
//     int loopCount = 0;
//     float sum = 0;
//     float ans = 0;
//     cout << "Enter a number : ";
//     cin >> n;//3
//     cout << "Enter value for x : ";
//     cin >> x;//2

//     for (int i = 1; i <= n; i++)
//     {
//         if (count % 2 == 0)
//             ans += power(x, loopCount) / factorial(loopCount);//ans = -1 + 16 / 24
//         else
//             ans -= power(x, loopCount) / factorial(loopCount);//ans = 1 - 2 = -1
//         count++;
//         loopCount += 2;
//     }

//     cout << ans;

//     return 0;
// }

// Task 5 : 9 + 99 + 999 + ... (n terms) .

// #include <iostream>
// using namespace std;

// int finalValue(int d, int n)
// {
//     int digit = 0;
//     for (int i = 1; i <= n; i++)
//         digit = digit * 10 + d;

//     return digit;
// }

// int answer(int n)
// {
//     if (n == 0)
//     {
//         cout << "\b\b\b" << " = ";
//         return 0;
//     }
//     cout << n << " + ";
//     return n + answer(n / 10);
// }

// int main()
// {
//     int n, digit;
//     cout << "Enter a number : ";
//     cin >> n;

//     cout << "Enter the digit : ";
//     cin >> digit;

//     int res = finalValue(digit, n);
//     cout << answer(res);
//     return 0;
// }