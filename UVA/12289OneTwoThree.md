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
