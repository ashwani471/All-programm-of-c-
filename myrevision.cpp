#include<iostream>
using namespace std;
#include<math.h>
#include<string.h>
//print array using function
 void print_array(int a[],int n){
   for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
   }
   cout<<endl;
   }
   swap_alternate(int a[],int n){
   for(int i=0;i<n;i=i+2){
    int temp=a[i];
    a[i]=a[i+1];
    a[i+1]=temp;
   }
   }
//reverse a array without using any space
//because the change reflected in array
void reverse_array(int a[],int n){
int i=0;
int j=n-1;
while(i<j){
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    i++;
    j--;
}
}
///find unique in array
int find_unique(int a[],int n){
for(int i=0;i<n;i++){
    int j;
    for( j=0;j<n;j++){
        if(i!=j){
            if(a[i]==a[j]){
                break;
            }
        }
    }
    if(j==n){
        return a[i];
    }
}
}
///array_intersection
void array_intersection(int a[],int n , int b[], int m){
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(a[i]==a[j]){
            cout<<a[i]<<endl;
            b[j]==INT_MIN;
            break;
        }
    }
}
}
///binary_search
int binary_search(int a[],int n,int x){
int start=0;
int end=n-1;
int mid=(start+end)/2;
while(start<=end){
    if(a[mid]==x){
        return mid;
    }
   else if(x<a[mid]){
        end=mid-1;
    }
    else{
        start=mid+1;
    }
}
return -1;
}
///selection_sort
void selection_sort(int a[],int n){
  for(int i=0;i<n;i++){
   int min=a[i];
 int min_index=i;
for(int j=i+1;j<n;j++){
if(a[j]<min){
        min=a[j];
    min_index=j;
}
}
int temp=a[i];
a[i]=a[min_index];
a[min_index]=temp;
}
}
///bubble_sort
void bubble_sort(int a[],int n){
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1-i;j++){
        if(a[j]>a[j+1]){
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
}
}
///insertion_sort
void insertion_sort(int a[],int n){
for(int i=0;i<n;i++)
{
 int current=a[i];
 int j;
 for( j=i-1;j>=0;j--){
    if(a[j]>current){
        a[j+1]=a[j];
    }
    else{
        break;
    }
 }
 a[j+1]=current;
}
}
///merge_sort
void merge_sort(int a[],int n, int b[],int m ,int ans[]){
    int i,j,k=0;
while(i<n&&j<m){
    if(a[i]>b[j]){
        ans[k]=b[j];
        j++;
        k++;
    }
    else{
        ans[k]=a[i];
        i++;
        k++;
    }
}
if(i<n){
    for(;i<n;i++){
        ans[k]=a[i];
        k++;
    }
    if(j<m){
        for(;j<m;j++){
            ans[k]=a[j];
            k++;
        }
    }
}
}
///push_zero_to_end
void pushzerosend(int a[],int n){
int k=0;
for(int i=0;i<n;i++){
    if(a[i]!=0){
        a[k]=a[i];
        k++;
    }
}
    for(int i=k;i<n;i++){
        a[i]=0;
    }
}
///rotate_array
void rotate_array(int a[],int n,int d){
for(int i=0;i<d;d++){
        int temp=a[0];
    for(int j=0;j<n-1;j++){
        a[j]=a[j+1];
    }
    a[n-1]=temp;
}

}
///character array
///find length of string
int length(char a[]){
int count=0;
for(int i=0;a[i]!='\0';i++){
    count++;
}
return count;
}
///check_palindrome
bool check_palindrome(char a[]){
int count=length(a);
for(int i=0,j=count-1;i<j;i++,j--){
    if(a[i]!=a[j]){
        return false;
    }
}
return true;
}
///reverse_string
void reverse_string( char a[]){
int len=length(a);
int i=0;
int j=len-1;
while(i<j){
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    i++;
    j--;
}
}
///print all prefixes
void print_allprefixes(char a[]){
for(int i=0;a[i]!='\0';i++){
    for(int j=0;j<=i;j++){
        cout<<a[j];
    }
    cout<<endl;
}
}
///function reflect change in case of array but not in the case of variable
/*void increament(int b,int a[],int n ){
b++;
a[0]++;
}
*/
///print_1to_n using function
/*void print_1_to_n(int n){
  for(int i=1;i<=n;i++){
    cout<<i<<endl;
  }
}*/
///check prime no using functions
int isprime(int n){
int d=2;
while(d<n){
    if(n%d==0){
        return;
    }
    d++;
}
return ;
}
/*
void print(int *p){
cout<<*p<<endl;
}
void increamentpointer(int *p)
{
   p=p+1;

}
*/
//void increament(int *p){
  // (*p)++;
//}
int sum(int a[],int n){     ///u can also pas it as the (int *a,int n) in actual u pass a[]or *a it passes always like a pointer
cout<<sizeof(a)<<endl;      ///so u can pass anyone of them it takes memory of 8 bytes;
int ans=0;
for(int i=0;i<=n;i++){
    ans+=a[i];
}
return ans ;
}
///reference function
 void increament(int &n){
n++;
}
///inline and default argument
inline int max(int a,int b){
int c=(a>b)?a:b;       ///only here we added the inline tag;it increase this code readability;
return c;
}
///default argument
int sum(int a[],int size,int si=0)
{                                      ///now see there there are three value to be assigned in function but only two arguments are passed by the main functon
    int ans =0;                      ///so si=0->default argument;
    for(int i=si;i<size;i++){
        ans+=a[i];
    }
    return ans;
}
///use of const
void f(int const *p )
{
   /// (*p)++;       ///if we use the const then it change by the pointer also; so it shows as the error;
}
void g(int const &j){
///j++;        ///here also if we use the const variable it also not changed; so its is also show the error ;
}
///recursion
int factorial(int n){
if (n==0){
    return 1;
}
int smalloutput=factorial(n-1);
return smalloutput*n;
}
///write a program to find out x to power n using recursion;
int power(int x, int n){
if((x>=0&&x<=30)&&(n>=0&&n<=30)){
    if (n==0||x==1){
        return 1;
    }
    int smalloutput=power(x,n-1);
    int output =smalloutput*x;
    return output;
}
}
///printing 1 to n natural no;
/*
void print_n(int n){
if(n==0){
    return;
}
print_n(n-1);
cout<<n<<" "<<endl;
}
*/
///present no of digit
int number_digit(int n){
if(n==0){
    return 0;
}
int smalloutput=number_digit(n/10);
return smalloutput+1;
}
///print the nth fibonacci number;
int fibo_n(int n){
if(n==0){
    return 0;
}
if(n==1){
    return 1;
}
int smallloutput1=fibo_n(n-1);
int smallloutput2=fibo_n(n-2);
int output=smallloutput1+smallloutput2;
return output;
}
///check is array sorted or not
bool check_sorted(int a[],int size ){
if(size==0||size==1){
    return true;
}
if(a[0]>a[1]){
    return false;
}
bool isSmallerSorted=check_sorted(a+1,size-1);
return isSmallerSorted;
}
///check sorted array in different way
bool check_sorted2(int a[],int n){
if(n==0||n==1){
    return true;
}
bool isSmallerSorted=check_sorted2(a+1,n-1);
if(!isSmallerSorted){
    return false;
}else{
return true;
}
}
///sum array
int sum_array(int a[],int n){
if(n==0){
    return 0;
}
int smalloutput=a[0]+sum_array(a+1,n-1);
return smalloutput;
}
///find a no in a array
bool find_number(int a[],int n, int x){
if(n==0){
    return false;
}
if(a[0]==x){
    return true;
}
bool check_smallerPart=find_number(a+1,n-1,x);
return check_smallerPart;
}
///find the first index of the element in the array
int first_index(int a[],int n,int x){
if(n==0){
        return -1;
}
if(a[0]==x){
    return 0;
}
int small_partofArray=first_index(a+1,n-1,x);
if(small_partofArray==-1){
    return small_partofArray;
}
return small_partofArray+1;
}
///find the last index of array
int last_index(int a[],int n,int x){
if(n==0){
    return -1;
}
int ans=last_index(a+1,n-1,x);
if(ans!=-1){
    return ans+1;
}else{
if(a[0]==x){
    return 0;
}else{
return ans;
}
}
}
///all indexes of the element
int all_index(int a[],int n,int x,int output[]){
    if(n==0){
        return -1;
    }
    int smallans=all_index(a+1,n-1,x,output);
    for(int i=0;i<smallans;i++){
        output[i]=output[i]+1;
    }
    if(a[0]==x){
            for(int i=0;i<=smallans;i++){
        output[i+1]=output[i];
    }}
    output[0]=0;
    smallans=smallans+1;
}
///multiply recursively
int multiply_rec(int m,int n){
if(n==0){
    return 0;
}
int smallans=multiply_rec(m,n-1);
smallans=smallans+m;
return smallans;
}
/// count number of zeros
int count_zeros(int n){
if(n<=9){
if(n==0){
    return 1;
}else{
return 0;
}
}
int smallans=count_zeros(n/10);
int LD=n%10;
if(LD==0){
    return smallans+1;
}else{
return smallans;
}
}
///geometric sum
double geometric_sum(int k){
    if(k==0){
        return 0;
    }
    double smallans=geometric_sum(k-1);
    cout<<smallans+1/pow(2,k);
}
///check_palindrome recursively
bool helper(char c[],int si,int ei){
    if(si==ei){
        return true;
    }
    if(si<=ei){
        if(c[si]!=c[ei]){
            return false;
        }else{
        return helper(c,si+1,ei-1);
        }
        return true;
    }
}
/*bool check_palindrome(char c[]){
int n;
for(int i=0;c[i]!='\0';i++){
    n++;
}
if(n==0){
    return true;
}
return helper(c,0,n-1);

}*/
///length of string using recursion
int length_rec(char str[]){
if(str[0]=='\0'){
    return 0;
}
int smallStringlength=length(str+1);
return smallStringlength+1;
}
///use of function to find combination
 /*int factorial(int n){
     int i=1;
     int ans=1;
     while(i<=n){
        ans=ans*i;
        i++;
     }
     return ans;
    }*/
int main(){
        //use of array
    //function reflect change in case of array but not in the case of variable
  ///find length of the string
 /*
  char str[100];
  cout<<"enter a string:"<<endl;
  cin.getline(str,100);
  int l=length_rec(str);
  cout<<l<<endl;
 */
   ///check palindrome recursively
/*
   char c[50];
   cout<<"enter a string "<<endl;
   cin>>c;
   bool ans=check_palindrome(c);
   if(ans){
    cout<<"true"<<endl;
   }else{
   cout<<"false"<<endl;
   }
*/
   ///geometric sum of a number
  /* int n;
   cout<<"enter a no"<<endl;
   cin>>n;
   double ans=geometric_sum(n);    ///check this code latter what's the problem in this code;
   cout<<ans<<endl;
   */
   ///count zeros in a number
  /*
   int n;
   cout<<"enter a number"<<endl;
   cin>>n;
   int ans=count_zeros(n);
   cout<<ans<<endl;
  */
  ///multiply no recursively
 /*
  int m,n;
  cout<<"enter m and n;"<<endl;
  cin>>m;
  cin>>n;
  int ans=multiply_rec(m,n);
  cout<<ans<<endl;
 */
   ///find all index of number
  /*
        int a[10];
    int n ;
    int output[10];
    cout<<"enter a no"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x;
    cout<<"enter a no that u wants find"<<endl;
    cin>>x;
    int ans=all_index( a,10,x,output);
    for(int i=0;i<ans;i++){
        cout<<output[i]<<" "<<endl;
    }
*/
    ///find the last index of number
      /*
      int a[10];
    int n ;
    cout<<"enter a no"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x;
    cout<<"enter a no that u wants find"<<endl;
    cin>>x;
    int ans=last_index( a,10,x);
    cout<<ans<<endl;
    */
    ///first index of number
  /*
     int a[10];
    int n ;
    cout<<"enter a no"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x;
    cout<<"enter a no that u wants find"<<endl;
    cin>>x;
    int ans=first_index( a,10,x);
    cout<<ans<<endl;
  */
    ///find a number in a array
    /*
    int a[10];
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    int x;
    cout<<"enter a number that u wants to find"<<endl;
    cin>>x;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool output=find_number(a,10,x);
    cout<<output<<endl;
    */
    ///sum of array using recursion
  /*
    int a[10];
    int n;
    cout<<"enter a number:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int output=sum_array( a, n);
    cout<<output<<endl;
*/
    ///check is array sorted or not
  /*  int a[10];
    int n;
    cout<<"enter a no"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    //cout<<check_sorted(a,10)<<endl;
///we can check is sorted array in different way
   cout<<check_sorted2(a,10)<<endl;
    */
    /// print the nth fibonacci number;
    /*
    int n;
    cout<<"enter the position"<<endl;
    cin>>n;
    int position=fibo_n(n);
    cout<<position<<endl;
    */
    ///print no of digit present in a number
    /*
    int n;
    cout<<"enter a no"<<endl;
    cin>>n;
    int count=number_digit(n);
    cout<<count<<endl;
*/
    ///printing first 1 to n natural no;
   /*
    int n;
    cout<<"enter a no"<<endl;
    cin>>n;
    print_n(n);
   */
   ///write a program to find out x to the power n using recursion;
  /*   int x;
     int n;
     cout<<"enter x"<<" "<<"enter n:"<<endl;
     cin>>x;
     cin>>n;
     //int ans=power(x,n);
     int ans=pow(x,n);     ///we can be find power using the pow pre defined function by only including the header file #include<math.h>;
     cout<<ans<<endl;
    */
    ///use of recursion
   /*
    int n;
    cin>>n;
    int output=factorial(n);   ///here in recursion we have to be done 3 steps like 1) base case 2) induction hypothesis 3)induction step;
    cout<<output<<endl;
   */

    ///use_of_const
  /*  const int i=10;    ///means here if u can use the const then u cant do that like make variable first int i; and then put value i=10;
    int j=12;          ///now see this is very interesting that u make k is reference variable which is also reference the j value;
    const int & k=j;   ///but there u use const variable extra due to this variable u cant change the value of j now ;means the path from k
    j++;                ///to j is const (understand path is const not the value of j is const)so u can change the value of j by increase ordecrease the value j ;
     cout<<k<<endl;           ///see the changes in the k also ;
      //k++;///if u do this u find error(increment of read only reference k)
    cout<<j<<" "<<k<<endl;
  */
    /// use const in pointer
   /*
    int const i=10;
    int j=22;
    int const *p=&i;      ///this line means p is pointing towards a constant integer; p is not a constant
    *p=&j;       ///so u can do this
  ///  cout<<(*p)++<<endl;    ///if u do this not to accessed because its read only path u cant write any thing.so cant do this(means cant perform any function to it like increment ,decrement and assign a value);

   int * const p2=&i;      ///this means p2 is constant;
     (*p2)++;    ///this is what that we can do;
     p2=&j;    ///but this is that we cant be do because p2 is constant pointer;

    int const *const p3=&i;     ///here we cant do anything because p3 is a constant pointer to a constant integer means here u cant do anything means u cant change the value of the pointer->p3 and also those p3->pointer points means i;
     (*p3)++;   /// the line are invalid so shows the  error;
     *p3=&j;   ///the line is invalid so shows the error;

    int j=12 ;
    int const *p2 =&j;
    cout<<*p2<<endl;   ///this can done
    j++;   ///u can do j++; but not *p2++(because *p2 has only read-only access due to const we cant perform any function)
    cout<<*p2<<endl;   ///Note:there is one point u have to be understand that if u have the const integer then u can make only const pointer;and if u dont have const integer then u can make any one them like const pointer and reference pointer;
     ///pass function
     f(p2);
     g(j);
   */
    ///inline and default arguments
   /*
    int a,b;
    cin>>a>>b;      ///this is good to use function and find ans but there is some hit on code so to reduce this we use the inline predefined
    int c=max(a,b);   ///function which copy the return value in main;
    cout<<c<<endl;

    ///default argument
    int a[20];
    sum(a,20);
    */
     ///2d_array_dynamically_stored
     /*
     int m,n;
     cin>>m>>n;
     int **p=new int*[m];
     for(int i=0;i<m;i++){
        p[i]=new int[n];
        for(int j=0;j<n;j++){
            cin>>p[i][j];
        }
     }
     for(int i=0;i<n;i++){
        delete [] p[i];
     }
     delete []p;
    */
    ///dynamic_memory_allocation
   /* int i=10;             ///here we use the static memory allocation also in case of the array we use the static memory allocation
    cout<<i<<endl;    ///in static memory allocation use the stack memory (basically stack memory is low in space so by default the memory
                      ///is located as stack memory;
    int *p=new int;  ///but in this case we use the heap memory which is bigger in size and also there is lots of benefit to use the
    *p=10;           ///heap memory because in case of heap memory we store the data dynamically like(int *p=new int)->so here what we have to do
    cout<<*p<<endl;    ///basically we write 'new' keyword which provide a space in heap..due to this we can use space ..and use of pointer we stored the
                     ///the address of new heap memory allocated for to access it outside and print them;
                       ///note:here new int make memory in heap of 4 bytes but the pointer *p takes there memory in stack of 8bytes;
      double *pd=new double ;  ///for double ;
      char *pc=new char;     ///for char
      int *pa=new int[50];    ///for array when we first use array as the int a[100]->means we provide space 1st but if we need more memory in compile time then?
      int n;
      cout<<"enter a no :"<<endl;
      cin>>n;                  ///means here we not need to ask memory in compile time ...we provide memory in run time ..
       int *pa2=new int[n];
         for(int i=0;i<n;i++){
            cin>>pa2[i];
         }
         int max=-1;
           for(int i=0;i<n;i++){
            if(pa2[i]>max){
               // max=*(pa2+i);///we can use this to print and also
                max=pa2[i];  ///because pa2[i]==*(pa2+i);
            }
           }
           cout<<max<<endl;
     */
        /*   while(true){      ///in this case the memory is located in the scope and due to scope of variable in diminished
            int i=10;
           }
           while(true){      ///but in case dynamic allocation the memory is not diminished;so we manually released the memory here;
            int *p=new int;
           }
    */
     /*
      int *p=new int;   ///we know that here we create the two memory location ane in stack of 8bytes to store the pointer 4byte in heap
      delete p;    ///so stack memory is deleted automatically but the heap memory is not so to delete the heap memory using delete keyword and address to which we want to delete;
                    ///NOte:here p is not delete only deleted heap memory (means those memory to which p is pointing);
      p=new int;
      delete p;   ///for to delete the single element ;

      p=new int[100];  ///for to delete the array;
      delete[]p;
*/
    /// pass_by _reference_and _reference_variable
  /*
   int i;
   i=10;

   int &j=i   ; ///we cant write it as int &j;  j=i; here we have to pas the memory location;
   cout<<i<<endl;
   j++;              ///& this is a reference variable means here j also point the i memory location;
   cout<<i<<endl;
   i++;
   cout<<j<<" "<<i<<endl;

   increament(i);   ///means if we use the pass by reference instead of pass by value then we can see the changes in the main memory;
   cout<<j<<endl;
   cout<<i<<endl;
  */
  ///address_type_casting
 /*
  int i=65;
  char c=i;       ///here in this case we use the implicit typecasting (which compiler perform it itself) .so output is 'A' due to ASCII value
  cout<<c<<endl;

  int *p=&i;
  char *pc=(char*)p;   ///but here is problem because here we force to compiler to compile it (so it is called the explicit typecasting
                        ///so we know that the pointer makes the 4 byte memory to store the address or value in which if we read it as a
  cout<<p<<endl;       ///character pointer then character pointer read the only 1st byte of it ..so as we know that the first byte of the integer
  cout<<pc<<endl;     ///is a least significant bit and store as a sign bit ...but actually its not right if we see that means in actual the sign
                        ///sign bit is at last and first bit stores a value due to this line no 275 gives output A;
  cout<<*p<<endl;
  cout<<*pc<<endl;
  cout<<*(pc+1)<<endl;
  cout<<*(pc+2)<<endl;
  cout<<*(pc+3)<<endl;
 */
  ///double pointer
  /*
  int i=10;
  int *p=&i;
  int **p2=&p;
  cout<<p2<<endl;
  cout<<&p<<endl;

  cout<<&i<<endl;
  cout<<p<<endl;
  cout<<*p2<<endl;

  cout<<i<<endl;
  cout<<*p<<endl;
  cout<<**p2<<endl;
  */
    ///pointers and function
/*    int i=10;
    int *p=&i;

    print(p);
    cout<<p<<endl;
    increamentpointer(p);
    cout<<p<<endl;

    cout<<*p<<endl;
    increament(p);
    cout<<*p<<endl;
  */
  /*int a[10];
  cout<<sizeof(a)<<endl;
  cout<<sum(a,10)<<endl;

    */
    ///character array and pointer
  /*  int a[]={1,2,3};
    char c[]="abc";     ///actually in case of character array it behaves differently means in case of character array
    cout<<a<<endl;       ///it actually prints the whole string;
    cout<<c<<endl;

    char *b=&c[0];/// same in this case it actually prints the whole string;
    cout<<b<<endl;

    char c1='a';
    char *pc=&c1;
    cout<<c1<<endl;
    cout<<pc<<endl;    ///so in this case it prints till it not found the '\0' character;
    */
    ///arrays and pointer
  /*  int a[10];
    cout<<a<<endl;
    cout<<&a<<endl;
    a[0]=5;
    a[1]=10;
    cout<<*a<<endl;        ///means a[0]=*a;
    cout<<*(a+1)<<endl;
    int *p=&a[0];
  */
  ///these are 3 difference in array and pointer
   /* cout<<a<<endl;
    cout<<p<<endl;///by this conclusion we have to see that a gets memory in symbol table only but the p get extra 8bytes memory
    cout<<&a<<endl;  ///due to this a and &a memory is same but p and &p memory is different because a cant take a memory exactly;
    cout<<&p<<endl;

      cout<<sizeof(a)<<endl;   ///in case of array it provide the actual length of array but in case of p it takes extra 8 or 4 bytes
    cout<<sizeof(p)<<endl;  /// according to pc;

    p=p+1;///its right u can assign different location in pointer but in case of array u can't be assign a different value
    a=a+1;/// in this because u can't change the value of it is fixed by one ;
*/
   ///pointer airthmetic and also means pointer memory
 /*  int i=10;
   int *p=&i;
   cout<<p<<endl;    ///generally stored the 4 bytes like (these stored the data in the hexadecimal form so focused on last three
   p=p+1;              ///to see the changes ef8->efc(8->9->a->b->c);
   cout<<p<<endl;
   double d=10.2;     ///in case of double pointer it increases the 8 bytes;
   double *dp=&d;
   cout<<dp<<endl;
   dp++;
   cout<<dp<<endl;
   */
     ///pointer is always initialized
    /* int i;
     cout<<i<<endl;
     i++;
     cout<<i<<endl;
     int *p=0;            ///but this not right to don't initialize the pointer the pointer is always be initialize by 0,if u not initialize it by the ant variable;
     cout<<p<<endl;     ///so we initialize it as int *p=0;due to this it shows error segmentation fault (which means there is not any memory of  this type )because '0' means null here;
     cout<<*p<<endl;
     (*p)++;
     cout<<*p<<endl;
     */
     ///pointers
   /*  int i=10;
     int *p=&i;
     cout<<i<<endl;
     cout<<*p<<endl;
     i++;
     cout<<i<<endl;
     cout<<*p<<endl;
    */
    ///character array
     ///print all prefixes
     /*char a[100]="abcd";
     print_allprefixes(a);
    */
    ///check_palindrome
    /*char a[100];
    cout<<"enter a string"<<endl;
    cin.getline(a,100);
    reverse_string(a);
    cout<<a;
    */
   /* ///length of a_string
    char a[100];
    cout<<"enter your name"<<endl;
    cin>>a;
    cout<<length(a);
    */
    ///rotate_array
    /*int n,d;
    cout<<"enter no of element u want to take in a array"<<endl;
    cin>>n;
    cout<<"enter no of element u want to rotate a array"<<endl;
    cin>>d;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    rotate_array(a,n,d);
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    */
    ///push_zero_to_end
    /*int n;
    cout<<"enter a no:"<<endl;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>n;
    }
     pushzerosend(a,n);
     print_array(a,n);
     */
     ///merge_sort
     /*int n,m;
     cout<<"enter two no:"<<endl;
     cin>>n>>m;
     int a[50];
     int b[50];
     int ans[50];
     for(int i=0;i<n;i++){
        cin>>a[i];
     }
     for(int j=0;j<m;j++){
        cin>>b[j];
     }
     merge_sort(a,n,b,m,ans);
     print_array(ans,m+n);
    */
    ///insertion_sort
    /*int n;
    int a[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    insertion_sort(a,n);
    print_array(a,n);
*/
    ///bubble_sort
  /*  int a[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bubble_sort(a,n);
    print_array(a,n);
    */
    ///selection_sort
  /*  int a[10]={1,5,4,3,2};
    selection_sort(a,5);
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
   */
    ///binary_search
   /* int a[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x;
    cin>>x;
    cout<<binary_search(a,n,x)<<endl;
    */
   ///find_intersection
  /* int a[10]={1,2,3,4,5};
   int b[10]={1,2,3};
   array_intersection(a,5,b,3);
    */
    ///find_unique
 /*   int a[10]={6,6,8,1,8,2,2};
    int output=find_unique(a,7);
    cout<<output;
   */
    ///swap alternate
    /*int a[10]={1,2,3,4,5,6};
    swap_alternate(a,6);
    print_array(a,6);

     */
     ///reverse a array without using of any space

 /*    int a[10]={1,2,3,4,5};

     reverse_array(a,5);
      print_array(a,5);
*/
/*    int b=10;
    int a[10]={1,2,3};
    increament(b,a,10);
    cout<<"a:"<<a<<endl;
    cout<<"b"<<b<<endl;
  */
    ///print array using function
   /* int n ;
    cout<<"enter a no"<<endl;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    print_array(a, n);
    */
    /*
    int n;
    cout<<"enter a no."<<endl;
    cin>>n;
    int a[10];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ///print array
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }*/
    ///find largest element in a array
    /*
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    cout<< "max:"<<max<<endl;
    */
    ///use of functions
    ///print prime no upto n
  /*  int n;
    cout<<"enter a no:"<<endl;
    cin>>n;
    for(int x=2;x<=n;x++){
        if(isprime(x)){
            cout<<x<<endl;
        }
    }*/
    ///print prime no between to interval using function
    int n,m;
    cout<<"enter a range"<<endl;
    cin>>n>>m;
    if(n>2&&m>2){
        for(int x=m;x<=n;x++){
            if(isprime(x)){
                cout<<x<<endl;
            }
        }
    }
    //print 1 3to n using functions
   /* int n;
    cout<<"enter a no."<<endl;
    cin>>n;
    print_1_to_n(n);*/
   //check prime no using function
   /*int n;
   cout<<"enter a no"<<endl;
   cin>>n;
   bool ans=isprime(n);
   cout<<ans<<endl;
   */
///program to find combination by using function
/*
   int n,r;
    cout<<"enter n:";
    cin>>n;
    cout<<"enter r:";
    cin>>r;
    int fact_n=factorial(n);
    int fact_r=factorial(r);
    int fact_n_r=factorial(n-r);
    int ans=fact_n/(fact_r*fact_n_r);
    cout<<ans<<endl;
    */
    ///use of cin.get
   /* char c;
    c=cin.get();
    int count=0;
    while(c!='$'){
        count++;
        c=cin.get();
    }
    cout<<count<<endl;
    */
    ///use of continue keyword
    ///using for loop
  /*  int n;
    cout<<"enter a no."<<endl;
    cin>>n;

    for(int i=1;i<n;i++){
        if(i==7){
            continue;
        }
        cout<<i<<endl;
    }*/
 /*   int n;
    cout<<"enter a no.";
    cin>>n;
    int i=1;
    while(i<n){
        if(i==7){
            i++;
            continue;
        }
        cout<<i;
        i++;
    }
   */
    ///pattern using break keyword
  /*  int n;
    cout<<"enter a no"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n)
        {
            cout<<j;
            j++;
            if(j>i){
                break;
            }
        }
        cout<<endl;
        i++;
    }*/
    ///prime no or not using a break keyword
    ///by using for loop
    /*int n;
    cout<<"enter a no.";
    cin>>n;
    bool divided=false;
    for(int d=2;d<n;d++){
      if(n%d==0){
        divided=true;
        break;
      }
    }
    if(divided){
        cout<<"not prime";
    }
    else{
        cout<<"prime";
    }
    */
  /*  int n;
    cout<<"enter a no.";
    cin>>n;
    bool divided=false;
    int d=2;
    while(d<n){
        if(n%d==0){
            divided=true;
        break;
        }
            d++;
    }
    if(divided){
        cout<<"not a prime no.";
    }
    else{
        cout<<"prime no.";
    }
    */
    ///no. is prime or not
  /*  int n;
    cout<<"enter a no.";
    cin>>n;
    bool divided=false;
    for(int d=2;d<n;d++){
        if(n%d==0){
            divided=true;
        }
    }
    if(divided){
        cout<<"not prime";
    }
    else{
        cout<<"prime";
    }
*/
    //pattern_17
   /*  int n;
    cout<<"enter a no"<<endl;
    cin>>n;
    int i=1;
*/
    //pattern_16
     /*int n;
    cout<<"enter a no"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int k=1;
        while(k<=n-i){
            cout<<" ";
            k++;
        }
        int j=1;
        int n=i;
        while(j<=i)
        {
            cout<<n;
            j++;
            n++;
        }
       int m=2*i-2;
    int l=1;
        while(l>=1){
         cout<<m;

        m--;
       }
        cout<<endl;
        i++;
        }*/
    //pattern_15
   /* int n;
    cout<<"enter a no"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int k=1;
        while(k<=n-i){
            cout<<" ";
            k++;
        }
        int j=1;
        while(j<=i)
        {
            cout<<j;
            j++;
        }
        int m=i-1;
        while(m>=1){
            cout<<m;
            m--;
        }
        cout<<endl;
        i++;
    }*/
    //pattern_14
    /*int n;
    cout<<"enter a no"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<"*";
            j++;
        }
        cout<<endl;
            i++;
    }
    */
    //pattern_13
  /*  int n;
    cout<<"enter a no"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int spaces=1;
        while(spaces<=n-i){
            cout<<" ";
            spaces=spaces+1;
        }
        int j=1;
        while(j<=i){
            cout<<j;
            j++;

        }
        cout<<endl;
        i++;

    }*/
    //pattern_12
 /*   int n;
    cout<<"enter a no"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int spaces=1;
        while(spaces<=n-i){
            cout<<" ";
            spaces++;
        }
        int j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }*/
    //pattern_11
   /* int n;
    cout<<"enter a no"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        char start='A'+i-1;
        while(j<=n){
            char ch=start+j-1;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }*/
    //pattern_10
   /* int n;
    cout<<"enter a no"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch='A'+j-1;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }*/
    //pattern_9
  /*  int n;
    cout<<"enter a no"<<endl;
    cin>>n;
    int i=1;
    int k=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<k;
            k++;
            j++;
        }
        cout<<endl;
        i++;
    }*/
    //pattern_8
    /*int n;
    cout<<"enter a no"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<(i+j)-1;
            j++;
        }
        cout<<endl;
        i++;
    }*/
    //pattern_7
    /*int n;
    cout<<"enter a no"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }*/
    //pattern_6
  /*  int n;
    cout<<"enter a no"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<(n-j)+1;
            j++;
        }
        cout<<endl;
        i++;
    }*/
    //pattern_5
   /* int n;
    cout<<"enter a no"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
   int j=1;
   while(j<=n){
    cout<<j;
    j++;
   }
   cout<<endl;
   i++;
    }*/
    //pattern_4
   /* int n;
    cout<<"enter a no"<<endl;

    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
    */
}
    //pattern_3
/*
     int i=1;
    cout<<"enter no:"<<endl;
    int n;
    cin>>n;
    while(i<=n){
            int spaces=1;
    while(spaces<=n-i){
        cout<<" ";
        spaces=spaces+1;
    }
        int j=1;
        int k=i;
        while(j<=i){
            cout<<k;
            j++;
            k++;
        }
        cout<<endl;
        i++;
    }
}*/
    //pattern_2
  /*  int i=1;
    cout<<"enter no:"<<endl;
    int n;
    cin>>n;
    while(i<=n){
        int j=1;
        int k=i;
        while(j<=i){
            cout<<k;
            j++;
            k++;
        }
        cout<<endl;
        i++;
    }
    */
    //pattern_1
 /*   int i=1;
    cout<<"enter no"<<endl;
    int n;
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
    */
 // check prime or not
/* int n;
 cout<<"enter a no" <<endl;
 cin>>n;
 int d=2;
 bool divided=false;
 while(d<n){
    if(n%d==0){
        cout<<"not prime"<<endl;
        divided=true;
    }
    d++;
 }
 if(!divided){
    cout<<"prime";
 }*/
 /*
 //check no even or not
    int n;
    cout<<"enter a no"<<endl;
    cin>>n;
    if(n%2==0){
        cout<<"even"<<endl;
    }else{
    cout<<"odd"<<endl;
    }
    */
/*
//fahrenheit to celcius
int f;
cout<<"enter the fah value"<<endl;
cin>>f;
float c=(5.0/9.0)*(f-32);
cout<<c;
cout<<endl;*/
/*
//check no are eaual or which one greater
int a;
int b;
cout<<"enter two no"<<endl;
cin>>a>>b;
/*bool isequal=(a==b);
bool isAgreater=(a>b);
bool isAless=(a<b);
cout<<"Are they equal"<<isequal<<endl;
cout<<"is A greater"<<isAgreater<<endl;
cout<<"is A less"<<isAless<<endl;

*//*
//check no is equa or greater and smaller
//by using the if and else
if(a==b){
    cout<<"hey these are equal"<<endl;
}else if(a<b){
cout<<"hey a is smaller than b"<<endl;
}else{
cout<<"hey b is smaller then a"<<endl;
}*/

