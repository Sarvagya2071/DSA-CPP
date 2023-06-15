// #include<iostream>
// using namespace std;
// int main(){
//     int v, w;
//     cin>> v >> w;
//     int TW, FW;
//     FW = (w-2*v)/2;
//     TW = v - FW;
//     cout<<TW<<endl;
//     cout<<FW<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     string s;
//     cin>> s;
//     int a = 0;
//     int b = 0;
//     for(int i = 0; i < s.length(); i++){
//         if (s[i] == '*'){
//             a++;
//         }

//         if (s[i] == '#'){
//             b++;
//         }
//     }
//     if(a==b) cout<<"0";
//     else if (a>b) cout << "positive"<<endl;
//     else if (a<b) cout << "negative"<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     float num;
//     cin>>num;
//     int sum = 0;
//     string s = to_string(num);
//     for(auto it : s){
//         if(isdigit(it)) sum += it - '0';
//     }
//     if(num<0){
//         sum = -1*sum;
//     }
//     cout << sum << endl;
//     return 0;
// }
//given an int array ar of size n the task is to find the count of elements whose value is greater than all its prior elements.
//the first element of the array should be considered in the count of result
//example:  ar 7,4,8,2,9
//as 7 is the first element it will consider in the result, 8 and 9 are also element are also result.
//the answer is 3
// ar[5] = 3,4,5,8,9 output = 5

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int count = 0;
//     int ar[n];
//     int currentmax = 0;
//     for(int i = 0; i < n; i++){
//         cin>>ar[i];
//     }
//     for(int i = 0; i < n; i++){
//             if(ar[i]>currentmax){
//                 currentmax = ar[i];
//                 count++;
//             }
//     }
//     cout<<count<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     int ar[n];
//     for(int i = 0; i < n; i++){
//         cin>>ar[i];
//     }
//     int count = 1;
//     bool flag;
//     for(int i = 1; i < n; i++){
//         flag = false;
//         for(int j = i-1; j >= 0; j--){
//             if(ar[j] > ar[i]){
//                 flag = true;
//                 break;
//             }
//         }
//         if(flag == false){
//             count++;
//         }
//     }
//     cout<<count<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int sum1, sum2, sum3;
//     int a1, b1, c1, a2, b2, c2, a3, b3, c3;
//     cin >>  a1 >> b1 >> c1 >> a2 >> b2 >> c2 >> a3 >> b3 >> c3;
//     float avg1, avg2, avg3;
//     sum1 = a1+b1+c1;
//     sum2 = a2+b2+c2;
//     sum3 = a3+b3+c3;
//     avg1 = sum1/3;
//     avg2 = sum2/3;
//     avg3 = sum3/3;
//     if(avg1 > avg2){
//         cout<<" Selected T1"<<endl;
//     }
//     if(avg2 > avg3){
//         cout<<" Selected T2"<<endl;
//     }
//     if(avg3 > avg1){
//         cout<<" Selected T3"<<endl;
//     }
//     if(avg1 <= 70){
//         cout<<"T1 unfit"<<endl;
//     }
//     if(avg2 <= 70){
//         cout<<"T2 unfit"<<endl;
//     }
//     if(avg3 <= 70){
//         cout<<"T3 unfit"<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// void CustomCaesarCipher(int key, string text){
//     string ans;
//     for(int i = 0; i < text.length(); i++){
//         if(text[i] == ' '){
//             ans = ' ';
//         }else {
//             ans = text[i]+key;
//         }
//         cout<<ans;
//     }
//     cout<<"\n";
// }

// int main()
// {
//     string text;
//     cout<<"Enter your PlainText: "<<endl;
//     getline(cin,text);
//     int key;
//     cout<<"Enter the key: "<<endl;
//     cin>>key;
//     cout<<"The encrypted text is: "<<endl;
//     CustomCaesarCipher(key, text);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[10][10];
//     int n,m;
//     cin>>n>>m;
//     for(int j = 0; j<m; j++){
//         if(j%2==0){
//             for(int i = 0; i<n; i++){
//                 cin>>arr[i][j];
//             }
//         }
//         else{
//             for(int i = 0; i<n; i++){
//                 for(int j = n-1; j>0; j++){
//                     cin>>arr[i][j];
//                     }
//                 }
//             }
        
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
// string s , d;
//  cin>>s>>d;
//  transform(s.begin(),s.end() , s.begin(),::toupper);
//  transform(d.begin(),d.end() , d.begin(),::toupper);
//  string arrs[8] = {"TH" , "GA", "IC" , "HA" , "TE", "LU" ,"NI","CA"};
//  float arr[8]={800,600,750,900,1400,1200,1100,1500};
//  float res=0;
//  int st ,ed;
//  for(int i=0;i<8;i++)
//  {
//      if(s==arrs[i])
//      st=i;
     
//      if(d==arrs[i])
//      ed=i;
//   }
//   if(st==ed)
//   {
//       cout<<" INVALID INPUT";
//       return 0;
//   }
//   else
//   {
//       int i=st+1;
//       cout<<i;
//         while(i!=ed+1)
//         {
//             res+=(arr[i]);
//             i=(i+1)%8;
//         }
//         cout<<(ceil)(res*0.005);
//         return 0;
//  }
// }
/**
 2^3 -> 8
 2^2 -> 4
 ans = base*smallerAns
*/
// #include<iostream>
// #include<cmath>
// using namespace std;

// int Solve(int base, int power){
//     if(base == 1 || base == 0)  return base;
//     if(power == 1)  return base;
//     if(power == 0) cout<<1<<endl;
    
// }

// int main(){
//     int ans;
//     int base, power;
//     cin>>base>>power;
//     cout<<Solve(base,power)<<endl;
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     int n,d,m=0,mp=0;
//     cin>>n;
// 	cin>>d;
//     vector<int> v(n);
//     for(int i = 0; i < n; i++){
//         cin>>v[i];
//     }
//     for(int i = 0; i < n; i++){   
//         if(v[i] >= m){
//             m = v[i];
//             mp = i;
//         }
//     }
//     cout<<mp+1<<endl;
// }

// #include<iostream>
// using namespace std;

// int main(){
// 	int n, t, dollar = 1, ew, total = 0;
// 	cin>>n>>t;
// 	int weights[n];
// 	for(int i = 0; i < n; i++){
// 		cin>>weights[i];
// 	}
// 	int sum = 0;
// 	for(int i = 0; i < n; i++){
// 		sum = sum + weights[i];
// 	}

// 	for( int i = 0; i < n; i++){
// 		if(t > weights[i]){
// 			ew = 1;
// 			}
// 	}
// 	for( int i = 0; i < n; i++){
// 		if(t < weights[i]){
// 			ew = weights[i] - t;
// 		}
// 	}
// 	total = ew;
// 	cout<<total<<endl;
// 	return 0;
// }
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     if (n % 2 == 0) cout << "Even"<<endl;
//     else cout << "Odd"<<endl;
//     return 0;
// }