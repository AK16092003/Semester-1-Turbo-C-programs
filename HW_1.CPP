#include <stdio.h>
void main()
{
    int a,b,c,d,e;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    printf("a = %d , b = %d , c = %d , d = %d , e = %d \n",a,b,c,d,e);
    if (a>b){
	//ab
	if (b>c){
	    // abc
	    if(c>d){
		// abcd
		if(d>e)
		    printf("The rank is a>b>c>d>e");
		else{
		    if(e>a)
		    printf("The rank is e>a>b>c>d");
		    else if(e>b)
		    printf("The rank is a>e>b>c>d");
		    else if(e>c)
		    printf("The rank is a>b>e>c>d");
		    else
		    printf("The rank is a>b>c>e>d");
		    }
	    }
	    else{
		 //abc
		 if(d>a){
		    if(e>d)
		    printf("The rank is e>d>a>b>c");
		    else if(e>a)
		    printf("The rank is d>e>a>b>c");
		    else if(e>b)
		    printf("The rank is d>a>e>b>c");
		    else if(e>c)
		    printf("The rank is d>a>b>e>c");
		    else
		    printf("The rank is d>a>b>c>e");

		 }
		 else if(d>b){
		    if(e>a)
		    printf("The rank is e>a>d>b>c");
		    else if(e>d)
		    printf("The rank is a>e>d>b>c");
		    else if(e>b)
		    printf("The rank is a>d>e>b>c");
		    else if(e>c)
		    printf("The rank is a>d>b>e>c");
		    else
		    printf("The rank is a>d>b>c>e");
		 }
		 else{
		    if(e>a)
		    printf("The rank is e>a>b>d>c");
		    else if(e>b)
		    printf("The rank is a>e>b>d>c");
		    else if(e>d)
		    printf("The rank is a>b>e>d>c");
		    else if(e>c)
		    printf("The rank is a>b>d>e>c");
		    else
		    printf("The rank is a>b>d>c>e");
		 }
	    }
	}
	else{
	    // ab
		 if(a>c){
		 // a c b
		     if(d>a){// d a c b
			  if(e>d)
			  printf("The rank is e>d>a>c>b");
			  else if(e>a)
			  printf("The rank is d>e>a>c>b");
			  else if(e>c)
			  printf("The rank is d>a>e>c>b");
			  else if(e>b)
			  printf("The rank is d>a>c>e>b");
			  else
			  printf("The rank is d>a>c>b>e");

		     }else if(d>c){ // a d c b
			  if(e>a)
			  printf("The rank is e>a>d>c>b");
			  else if(e>d)
			  printf("The rank is a>e>d>c>b");
			  else if(e>c)
			  printf("The rank is a>d>e>c>b");
			  else if(e>b)
			  printf("The rank is a>d>c>e>b");
			  else
			  printf("The rank is a>d>c>b>e");
		     }else if(d>b){ // a c d b
			  if(e>a)
			  printf("The rank is e>a>c>d>b");
			  else if(e>c)
			  printf("The rank is a>e>c>d>b");
			  else if(e>d)
			  printf("The rank is a>c>e>d>b");
			  else if(e>b)
			  printf("The rank is a>c>d>e>b");
			  else
			  printf("The rank is a>c>d>b>e");
		     }else{ // a c b d
			  if(e>a)
			  printf("The rank is e>a>c>b>d");
			  else if(e>c)
			  printf("The rank is a>e>c>b>d");
			  else if(e>b)
			  printf("The rank is a>c>e>b>d");
			  else if(e>d)
			  printf("The rank is a>c>b>e>d");
			  else
			  printf("The rank is a>c>b>d>e");
		     }
		 }
		 else
		 {
		 // c a b
		     if(d>c){
			 //dcab
			  if(e>d)
			  printf("The rank is e>d>c>a>b");
			  else if(e>c)
			  printf("The rank is d>e>c>a>b");
			  else if(e>a)
			  printf("The rank is d>c>e>a>b");
			  else if(e>b)
			  printf("The rank is d>c>a>e>b");
			  else
			  printf("The rank is d>c>a>b>e");
		     }
		     else if(d>a){
			 //cdab
			  if(e>c)
			  printf("The rank is e>c>d>a>b");
			  else if(e>d)
			  printf("The rank is c>e>d>a>b");
			  else if(e>a)
			  printf("The rank is c>d>e>a>b");
			  else if(e>b)
			  printf("The rank is c>d>a>e>b");
			  else
			  printf("The rank is c>d>a>b>e");
		     }
		     else if(d>b){
			 //cadb
			  if(e>c)
			  printf("The rank is e>c>a>d>b");
			  else if(e>a)
			  printf("The rank is c>e>a>d>b");
			  else if(e>d)
			  printf("The rank is c>a>e>d>b");
			  else if(e>b)
			  printf("The rank is c>a>d>e>b");
			  else
			  printf("The rank is c>a>d>b>e");
		     }
		     else{
			 //cabd
			 if(e>c)
			  printf("The rank is e>c>a>b>d");
			  else if(e>a)
			  printf("The rank is c>e>a>b>d");
			  else if(e>b)
			  printf("The rank is c>a>e>b>d");
			  else if(e>d)
			  printf("The rank is c>a>b>e>d");
			  else
			  printf("The rank is c>a>b>d>e");
		     }
		 }

	    }
	}
	else {

	// ba
	if (a>c){
	    // bac
	    if(c>d){
		// bacd
		if(d>e)
		    printf("The rank is b>a>c>d>e");
		else{
		    if(e>b)
		    printf("The rank is e>b>a>c>d");
		    else if(e>a)
		    printf("The rank is a>e>b>c>d");
		    else if(e>c)
		    printf("The rank is b>a>e>c>d");
		    else
		    printf("The rank is b>a>c>e>d");
		    }
	    }
	    else{
		 //bac
		 if(d>b){ // dbac
		    if(e>d)
		    printf("The rank is e>d>b>a>c");
		    else if(e>b)
		    printf("The rank is d>e>b>a>c");
		    else if(e>a)
		    printf("The rank is d>b>e>a>c");
		    else if(e>c)
		    printf("The rank is d>b>a>e>c");
		    else
		    printf("The rank is d>b>a>c>e");

		 }
		 else if(d>a){ // bdac
		    if(e>b)
		    printf("The rank is e>b>d>a>c");
		    else if(e>d)
		    printf("The rank is b>e>d>a>c");
		    else if(e>a)
		    printf("The rank is b>d>e>a>c");
		    else if(e>c)
		    printf("The rank is b>d>a>e>c");
		    else
		    printf("The rank is b>d>a>c>e");
		 }
		 else{ //badc
		    if(e>b)
		    printf("The rank is e>b>a>d>c");
		    else if(e>a)
		    printf("The rank is b>e>a>d>c");
		    else if(e>d)
		    printf("The rank is b>a>e>d>c");
		    else if(e>c)
		    printf("The rank is b>a>d>e>c");
		    else
		    printf("The rank is b>a>d>c>e");
		 }
	    }
	}
	else{
	    // ba
		 if(b>c){
		 // b c a
		     if(d>b){// d b c a
			  if(e>d)
			  printf("The rank is e>d>b>c>a");
			  else if(e>b)
			  printf("The rank is d>e>b>c>a");
			  else if(e>c)
			  printf("The rank is d>b>e>c>a");
			  else if(e>a)
			  printf("The rank is d>b>c>e>a");
			  else
			  printf("The rank is d>b>c>a>e");

		     }else if(d>c){ // b d c a
			  if(e>b)
			  printf("The rank is e>b>d>c>a");
			  else if(e>d)
			  printf("The rank is b>e>d>c>a");
			  else if(e>c)
			  printf("The rank is b>d>e>c>a");
			  else if(e>a)
			  printf("The rank is b>d>c>e>a");
			  else
			  printf("The rank is b>d>c>a>e");
		     }else if(d>b){ // b c d a
			  if(e>b)
			  printf("The rank is e>b>c>d>a");
			  else if(e>c)
			  printf("The rank is b>e>c>d>a");
			  else if(e>d)
			  printf("The rank is b>c>e>d>a");
			  else if(e>a)
			  printf("The rank is b>c>d>e>a");
			  else
			  printf("The rank is b>c>d>a>e");
		     }else{ // b c a d
			  if(e>b)
			  printf("The rank is e>b>c>a>d");
			  else if(e>c)
			  printf("The rank is b>e>c>a>d");
			  else if(e>a)
			  printf("The rank is b>c>e>a>d");
			  else if(e>d)
			  printf("The rank is b>c>a>e>d");
			  else
			  printf("The rank is b>c>a>d>e");
		     }
		 }
		 else
		 {
		 // c b a
		     if(d>c){
			  //dcba
			  if(e>d)
			  printf("The rank is e>d>c>b>a");
			  else if(e>c)
			  printf("The rank is d>e>c>b>a");
			  else if(e>b)
			  printf("The rank is d>c>e>b>a");
			  else if(e>a)
			  printf("The rank is d>c>b>e>a");
			  else
			  printf("The rank is d>c>b>a>e");
		     }
		     else if(d>b){
			 //cdba
			  if(e>c)
			  printf("The rank is e>c>d>b>a");
			  else if(e>d)
			  printf("The rank is c>e>d>b>a");
			  else if(e>b)
			  printf("The rank is c>d>e>b>a");
			  else if(e>a)
			  printf("The rank is c>d>b>e>a");
			  else
			  printf("The rank is c>d>b>a>e");
		     }
		     else if(d>a){
			 //cbda
			  if(e>c)
			  printf("The rank is e>c>b>d>a");
			  else if(e>b)
			  printf("The rank is c>e>b>d>a");
			  else if(e>d)
			  printf("The rank is c>b>e>d>a");
			  else if(e>a)
			  printf("The rank is c>b>d>e>a");
			  else
			  printf("The rank is c>b>d>a>e");
		     }
		     else{
			 //cbad
			  if(e>c)
			  printf("The rank is e>c>b>a>d");
			  else if(e>b)
			  printf("The rank is c>e>b>a>d");
			  else if(e>a)
			  printf("The rank is c>b>e>a>d");
			  else if(e>d)
			  printf("The rank is c>b>a>e>d");
			  else
			  printf("The rank is c>b>a>d>e");
		     }
		 }
	    }
	}
    printf("\n");
}