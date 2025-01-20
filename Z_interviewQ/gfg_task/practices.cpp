// #include <iostream>
// #include <cstring>
// using namespace std;
// int main()
// {
//     string str = "GeekforGeeks";
//     cout << "Main string is:" << str << endl;
//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         if (islower(str[i]))
//         {
//             str[i] = toupper(str[i]);
//         }
//         else if (isupper(str[i]))
//         {
//             str[i] = tolower(str[i]);
//         }
//     }
//     cout << "Converted string is:" << str << endl;
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     string str = "Hello";
//     int vovels = 0, j = 0;
//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U')
//         {
//             str[j++] = str[i];
//         }
//     }
//     while (j < str.size())
//     {
//         str[j] = '\0';
//         j++;
//     }

//     cout << "Vovels are :" << str << endl;
// }
