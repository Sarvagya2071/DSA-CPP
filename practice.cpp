// #include<iostream>
// #include<vector>
// using namespace std;
// void merge(vector<int> &v, int s, int mid, int e, vector<int> &temp){

//     int r1 = s;
//     int r2 = mid+1;
//     int w = s;

//     while(r1 <= mid || r2 <= e){
//         if(r1>mid){
//             temp[w++] = v[r2++];
//         }
//         else if(r2>e){
//             temp[w++] = v[r1++];
//         }
//         else{
//             temp[w++] = v[r1]>v[r2] ? v[r2++] : v[r1++];
//         }
//     }
//     //copy back elements from temp into v
//     for(int w = s; w<=e; w++){
//         v[w] = temp[w];
//     }
// }
// void mergeSort(vector<int> &v, int s, int e, vector<int> &temp){
//     if(s>e) return;

//     int mid = s + (e-s)/2;

//     mergeSort(v, 0, mid, temp);
//     mergeSort(v, mid+1, e, temp);

//     merge(v, s, mid, e, temp);
// }
// int main(){
    // vector<int> v = {7,5,6,1,2,4,8};
    // vector<int> temp(v);
    // mergeSort(v, 0, v.size()-1, temp);
    // for(int x : v)  cout<<x<<" ";
    // cout<<endl;
    // string s;
    // cin>>s;
//     getline(cin, s, '%');
//     cout<<s<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     long long cnt = 0; 
//     while(n > 0){
//         cnt += n/5; 
//         n /= 5; 
//     }
//     cout<<cnt<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
 
// // Driver code
// int main()
// {
//     int x, y;
//     int result;
 
//     x = 10;
//     y = 8;
 
//     // modulo for floating point values
//     result = x % y;
//     cout << result;
 
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void number(int n){
//     if(n==0) return;
//     number(n++);
// }

// int main(){

//     for(int i = 1; i<5; i++){
//         int x = 5; 
//         x++;
//         cout<<x<<" ";
//     }
//     cout<<endl;
    
//     return 0;
// }


// #include <bits/stdc++.h>

// using namespace std;

// unordered_map<string, string> wordToDigit = {
//     {"zero", "0"},
//     {"one", "1"},
//     {"two", "2"},
//     {"three", "3"},
//     {"four", "4"},
//     {"five", "5"},
//     {"six", "6"},
//     {"seven", "7"},
//     {"eight", "8"},
//     {"nine", "9"}
// };

// string getPhoneNumber(string s) {
//     istringstream iss(s);
//     string word;
//     string result;
//     string currentWord = "";
//     int count = 1;

//     while (iss >> word) {
//         if (word == currentWord) {
//             count++;
//         } else {
//             if (count == 2) {
//                 result += "double";
//             } else if (count == 3) {
//                 result += "triple";
//             } else if (count > 3) {
//                 result += "double" + to_string(count);
//             }

//             result += wordToDigit[word];

//             currentWord = word;
//             count = 1;
//         }
//     }

//     if (count == 2) {
//         result += "double";
//     } else if (count == 3) {
//         result += "triple";
//     } else if (count > 3) {
//         result += "double" + to_string(count);
//     }

//     return result;
// }


// int main() {
//     ofstream fout(getenv("OUTPUT_PATH"));

//     string s;
//     getline(cin, s);

//     string result = getPhoneNumber(s);

//     fout << result << "\n";

//     fout.close();

//     return 0;
// }




//Remove Element and print the remaining
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i = 0; i < n; i++){
//         cin>>arr[i];
//     }
//     int val;
//     cin>>val;

//     int a = 0;
//     for(int i = 0; i < n; i++){
//         if(arr[i] != val){
//             arr[a] = arr[i];
//             a++;
//         }
//     }

//     for(int i = 0; i < a; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<"\n";
//     cout<<a<<endl;
//     return 0;
// }

// Prime or not
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int flag = 0;

    if(n <= 1){
        cout<< "Not a prime number"<<endl;
        return 0;
    }
    //square root tak chota factor mil jaega
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0){
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        cout<<n<<" is a Prime Number"<<endl;
    else
        cout<<n<<" is not a Prime Number"<<endl;
    return 0;
}

//Print the Prime Numbers
// #include<iostream>
// using namespace std;

// int main(){
//     int a;
//     cin>>a;
//     int b;
//     cin>>b;
//     int flag = 0;
//     for(int i = a; i <= b; i++){
//         for(int j = 1; j <= sqrt(i); j++){
//             if(j%i==0){
//                 flag = 1;
//                 break;
//             }
//         }
//         if(flag == 0){
//             cout<<i<<" ";
//         }
//         int flag = 0;
//     } 
//     cout<<"\n";
//     return 0;
// }