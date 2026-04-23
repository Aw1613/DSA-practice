#include <iostream>
using namespace std;
int main(){
//    for (int n = 0; n <= 4; n++)
//    {
//         for (int e = 4-n ; e >= 0; e--)
//         {
//             cout<<" ";
//         }
//         for (int s = 0; s <= 2*n; s++)
//         {
//             cout<<"*";
//         }
//         for (int e = 4-n ; e >= 0; e--)
//         {
//             cout<<" ";
//         }
//         cout<<endl;
        
//    }

// for (int n = 4; n >= 0; n--)
// {
//     for (int e = 0; e <= 4-n; e++)
//     {
//         cout<<" ";
//     }
//     for (int s = 2*n; s >= 0; s--)
//     {
//         cout<<"*";
//     }
//     for (int e = 0; e <= 4-n; e++)
//     {
//         cout<<" ";
//     }
//     cout<<endl;
    
// }

//     for (int n = 0; n <= 4; n++)
//    {
//         for (int e = 4-n ; e >= 0; e--)
//         {
//             cout<<" ";
//         }
//         for (int s = 0; s <= 2*n; s++)
//         {
//             cout<<"*";
//         }
//         for (int e = 4-n ; e >= 0; e--)
//         {
//             cout<<" ";
//         }
//         cout<<endl;
        
//    }
   
//    for (int n = 4; n >= 0; n--)
// {
//     for (int e = 0; e <= 4-n; e++)
//     {
//         cout<<" ";
//     }
//     for (int s = 2*n; s >= 0; s--)
//     {
//         cout<<"*";
//     }
//     for (int e = 0; e <= 4-n; e++)
//     {
//         cout<<" ";
//     }
//     cout<<endl;
    

// useless section 
// }
// int n = 4;
// int h = 0;
// for (int i = 0; i < 2*n-1; i++)
// {
//     if (i<=n)
//     {
//         for (int b = n-i; b >=0; b--)
//         {
//             cout<<" ";
//         }
//         for (int s = 0; s < 2*i-1; s++)
//         {
//             cout<<"*";
//         }
//         for (int b = n-i; b >=0; b--)
//         {
//             cout<<" ";
//         }
//         cout<<endl;
//     }
//     if (i>n && i<=2*n)
//     {
//         for (int e = 0; e <= i-n-1; e++)
//         {
//             cout<<" ";
//         }
//         for (int s = 2*n-1-(i-n-1); s > 0; s--)
//         {
//             cout<<"*";
//         }
//         for (int e = 0; e <= i-n-1; e++)
//         {
//             cout<<" ";
//         }
//         cout<<endl;
        
//     }
    
    
// }

// int n =10;
// int x = 0;
// while (x<n)
// {
//     for (int s = 0; s <= x; s++)
//     {
//         cout<<"*";
//     }
//     cout<<endl;
//     x++;
// }

// while (x>=0)
// {
//     for (int s = x; s  >= 0; s--) {
//         cout<<"*";
//     }
//     cout<<endl;
//     x--;
// }

int n = 5;
for (int i = 0; i  < n; i++)
{
    for (int r = 0; r <= i; r++)
    {
        if (i%2 == 0)
        {
            if (r == 0){
                cout<<"1";
            }
            else if (r%2 != 0){
                cout<<"0";
            }
            else if (r%2 == 0){
                cout<<"1";
            }
        }
        else if (i%2 != 0)
        {
            if (r == 0){
                cout<<"0";
            }
            else if (r%2 != 0){
                cout<<"1";
            }
            else if (r%2 == 0){
                cout<<"0";
            }
        }
    }
    cout<<endl;
}


    return 0;
}
