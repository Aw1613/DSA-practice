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

// int n = 5;
// for (int i = 0; i  < n; i++)
// {
//     for (int r = 0; r <= i; r++)
//     {
//         if (i%2 == 0)
//         {
//             if (r == 0){
//                 cout<<"1";
//             }
//             else if (r%2 != 0){
//                 cout<<"0";
//             }
//             else if (r%2 == 0){
//                 cout<<"1";
//             }
//         }
//         else if (i%2 != 0)
//         {
//             if (r == 0){
//                 cout<<"0";
//             }
//             else if (r%2 != 0){
//                 cout<<"1";
//             }
//             else if (r%2 == 0){
//                 cout<<"0";
//             }
//         }
//     }
//     cout<<endl;
// }



// int n = 5;
// int sp = (n-1)*2;
// for (int i = 1; i <= n; i++)
// {
//     for (int ca = 1; ca <= i; ca++)
//     {
//         cout<<ca;
//     }
//     for (int s = 0; s < sp; s++)
//     {
//         cout<<" ";
//     }
//     for (int cb = i; cb > 0; cb--)
//     {
//         cout<<cb;
//     }
//     sp = sp-2;
//     cout<<endl;
    
// }



// int n =5;
// int c = 1;
// for (int i = 0; i < n; i++)
// {
//     for (int r = 0; r <= i; r++)
//     {
//         cout<<c<<" ";
//         c++;
//     }
//     cout<<endl;
    
// }





// int n = 5;
// char a = 65;
// for (int i = 0; i < n; i++)
// {
//     for (int r = 0; r <= i; r++)
//     {
//         cout<<a<<" ";
//         a++;
//     }
//     a = 65;
//     cout<<endl;
    
// }

// int n = 5;
// char a = 65;
// for (int i = n; i >= 0; i--)
// {
//     for (int r = i; r > 0; r--)
//     {
//         cout<<a<<" ";
//         a++;
//     }
//     a = 65;
//     cout<<endl;
    
// }



// int n = 5;
// char a = 65;
// for(int i = 0; i<n;i++){
//     for(int r = 0; r<=i; r++){
//         cout<<a;
//     }
//     a++;
//     cout<<endl;
// }


// int n = 7;
// int b = n-1;
// int l =0;
// char a = 65;
// for(int i = 0; i < n;i++){
//     for (int s = 0; s < b; s++)
//     {
//         cout<<" ";
//     }
//     l = 0;
//     while (l <= 2*i)
//     {
//         if (l <= i)
//         {
//             cout<<a;
//             a++;
//             if (l==i)
//             {
//                 a--;
//             }
//             l++;
//         }
//         // a--;
//         else {
//             a--;
//             cout<<a;
//             l++;
//         }
        
//     }
//     for (int s = 0; s < b; s++)
//     {
//         cout<<" ";
//     }
//     a = 65;
//     b--;
//     cout<<endl;
    
    
// }

//revised code 

int n = 5;
char a = 65;
for (int i = 0; i < n; i++)
{
    // space printing 
    for (int s = 0; s < n - i - 1; s++)
    {
        cout<<" ";
    }

    for (int j = 0; j <= 2*i; j++)
    {
        int breakpoint = (2 * i + 1)/2;
        if (j < breakpoint)
        {
            cout<<a;
            a++;
        }
        else if(j >= breakpoint) {
            cout<<a;
            a--;
        }
    }
    
    for (int s = 0; s < n - i - 1; s++)
    {
        cout<<" ";
    }
    a = 65;

    cout<<endl;
    
    
}


    return 0;
}
