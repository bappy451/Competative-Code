# Competitive Programming Problem Hints
## UVA Problem
###11364Parking
the problem is all about round trip so all you have to do find they difference between lowest value and highest value and then multiply by two. That's all.
Because the resultant value contain the round trip. If you want to calculate the parking position that will be the middle value after sorting all value
Good luck :)

### 11547AutomaticAnswer
This problem is one of the easiest problem. All you have to do is find the result after calculation which is given in the problem.

<p align="center"><img alt="$$&#10; res = (((((x*567)/9)+7492)*235)/47)-498 &#10;$$" src="svgs/32737e0a8d5a4cf32ba3ab1b74902ab7.png?invert_in_darkmode" align=middle width="127.89183pt" height="39.30498pt"/></p>

can be rewrite author:

<p align="center"><img alt="$$&#10; res = ((((x*63)+7492))*5)-498 &#10;$$" src="svgs/32737e0a8d5a4cf32ba3ab1b74902ab7.png?invert_in_darkmode" align=middle width="127.89183pt" height="39.30498pt"/></p>

After calculating this we need to find out the _**10th**_ position of the number.
To find out that we can use modulus

<p align="center"><img alt="$$&#10; res = res \% 100 &#10;$$" src="svgs/32737e0a8d5a4cf32ba3ab1b74902ab7.png?invert_in_darkmode" align=middle width="127.89183pt" height="39.30498pt"/></p>

this provide the last two digit of the number. Then we can find out our final result by

<p align="center"><img alt="$$&#10; res = res/10 &#10;$$" src="svgs/32737e0a8d5a4cf32ba3ab1b74902ab7.png?invert_in_darkmode" align=middle width="127.89183pt" height="39.30498pt"/></p>

That's all :)
