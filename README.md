# Competitive Programming Problem Hints
## UVA Problem
### 11364Parking
the problem is all about round trip so all you have to do find they difference between lowest value and highest value and then multiply by two. That's all.
Because the resultant value contain the round trip. If you want to calculate the parking position that will be the middle value after sorting all value
Good luck :)

### 11547AutomaticAnswer
This problem is one of the easiest problem. All you have to do is find the result after calculation which is given in the problem.
```math
res = (((((x*567)/9)+7492)*235)/47)-498
```
can be rewrite author:
```math
res = ((((x*63)+7492))*5)-498
```
After calculating this we need to find out the _**10th**_ position of the number.
To find out that we can use modulus

res = res \% 100
```math
```
This provide the last two digit of the number. Then we can find out our final result by

```math
res = res/10
```
That's all :)

### 12250LanguageDetection
This is also very simple program. You can solve this problem only with switch-case/ if-else block. Main concern about this problem is getting input form console. You can't do with regular cin.
```C++
cin>>variable;
```
All you need to do is getline through which you can work directly with string i/o.
```C++
getline(cin,mystr);
```
Keep in mind the "Unknown" case.
That's all :)

### 12279EmoogleBalance
This is very interesting problem. All the information is very funny. The most important information is given as a equation in bolt form. All you need to do is finding the difference between the non-zeros and zeros.
```math
Emoogle Balance = number of times Emoogle is supposed to give a treat
according to the book - number of times he has actually given the treat.
```
Just use if-ealse block for finding out zeros and non-zeros.

### 12289OneTwoThree
This is easy problem you need to find out string length of the inputted string e.g. two-2, one-2, three-3.
```c++
getline (cin,mystr);
int n=0;
n = mystr.length();
```
You can see that three is standing out of from one and two Because it's length is 5. So, finding out three is very easy.

Now one and two: As input can be miss-spelled by only one character then you can make a if-else block by making combination of three types of wrong spelling that can be possible
```C++
if(mystr[0]=='o' && mystr[1]=='n' || mystr[1]=='e')cout<<1<<endl;
else if(mystr[0]=='o' || mystr[1]=='n' && mystr[1]=='e')cout<<1<<endl;
else if(mystr[0]=='o' && mystr[1]=='e' || mystr[1]=='n')cout<<1<<endl;
```
That's all :)

### 12372PackingforHoliday
This is one of the easiest problem. Just check whether any given input is greater than 20 or not.
If you found any number grater than 20 then the box is bad otherwise good.
That's all :)

### 12403SaveSetu
This problem is nothing but checking the first word. Then Take action accordingly.

Use this
```C++
cin>>mystr;
```
instead of This
```C++
getline (cin,mystr);
```

Because cin will give you only one word at a time on the other hand getline will give you the entire line as a single string.
That' all :)

### 12577Hajj_e_Akbar
This problem is just like  *__2250LanguageDetection__*
