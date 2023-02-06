# Patterns

Directory : Practice / Patterns

```c++

for(int i = 0; i<6; i++){
    int ascii_char = 65;
      for(int j = 0; i>=j; j++){
        cout<<(char)ascii_char;
        ascii_char++;
      }
      cout<<endl;
  }

//   Method 2

for(int i=1; i<=n; i++){
	for(int j=1; j<=i; j++){
		printf("%c ",j+64);
		
	}
	cout<<endl;
}

```
<pre>
A  
A B  
A B C  
A B C D  
A B C D E  
</pre>

### Star patterns

```c++

/************ Method 1 ***********/

for(int i = 0; i < 6; i++){
    for(int j = 0; j<6; j++){
        if(i<=j)
            cout<<" *";
    }
    cout<<endl;
}

/************ Method 2 **********/

for(int i=0;i<6;i++){
    for(int j=0;j<6;j++){
        if(j>=i)
            cout<<"* ";   
    }
    cout<<endl;
}

```
<pre>
* * * * * *  
* * * * *  
* * * *  
* * *  
* *  
*
</pre>


```c++

/*********** Method 1 ************/

for(int i = 0; i < 6; i++){
    for(int j = 0; j<6; j ++){
        if(i+j>6-1)
            cout<<"* ";       
    }
    cout<<endl;
}

/************* Method 2 **************/
for(int i=0; i<6; i++){
    for(int j=0; i>=j; j++){ 
            cout<<"* ";
    }
    cout<<endl; 
}

```
<pre>
*   
* *  
* * *    
* * * *  
* * * * *
</pre>

```c++

int n = 6;
for(int i=1; i<=n; i++){
	for(int j=1; j<=n-i; j++){
		// printf("%d",j);
		printf("# ");
	}
	cout<<endl;
}
```

<pre>
# # # # # 
# # # # 
# # # 
# # 
# 
</pre>

```c++
for(int i=1; i<=n; i++){
	for(int j=1; j<=i; j++){
		printf("%d ",i);
		
	}
	cout<<endl;
}
```
<pre>
1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 
6 6 6 6 6 6 
</pre>

```c++
for(int i=1; i<=n; i++){
    for(int j=n; j>=i; j--){
        printf("%d ",j);
        
    }
    cout<<endl;
}
```
<pre>
6 5 4 3 2 1 
6 5 4 3 2 
6 5 4 3 
6 5 4 
6 5 
6 
</pre>

```c++
for(int i=1; i<=6; i++){
    for(int j=i; j<=6; j++){
        cout<<j<<" ";
    }
    cout<<endl;
}
```
<pre>
1 2 3 4 5 6 
2 3 4 5 6 
3 4 5 6 
4 5 6 
5 6
6
</pre>

```c++
int n=6;
for(int i=n; i>=1; i--){
    for(int j=i; j>=1; j--){
        cout<<j<<" ";
    }
cout<<endl;
}
```
<pre>
6 5 4 3 2 1
5 4 3 2 1
4 3 2 1
3 2 1
2 1
1
</pre>

```c++
for(int i=1; i<=6; i++){
    for(int j=1; j<=6; j++){
    if(i==1 || i==6 || j==1 || j==6)
        printf("# ");
    else
        printf("  "); // There will be two spaces on for # and one will be blank   
    }
    cout<<endl;
}
```
<pre>

# # # # # #
#         #
#         #
#         #
#         #
# # # # # #

</pre>

```c++
for(int i=1; i<=6; i++){
        for(int j=i; j<=6; j++){
            if(j==6 || i==1 || i==j) // here n=6 so we directly uses 6 instead of n
                printf("# ");
            else
                printf("  "); 
        }
        cout<<endl;
    }
```
<pre>
# # # # # # 
#       # 
#     # 
#   # 
# #
#
</pre>

```c++
for(int i=1; i<=6; i++){
        for(int j=1; j<=6; j++){
            if(j==6 || i==1 || i==j) // here n=6 so we directly uses 6 instead of n
                printf("# ");
            else
                printf("  "); 
        }
        cout<<endl;
    }
```
<pre>
# # # # # #
  #       #
    #     #
      #   #
        # #
          #
</pre>

```c++
for(int i=1; i<=6; i++){
    for(int j=1; j<=i; j++){
        if(j==1 || i==6 || i==j) // here n=6 so we directly uses 6 instead of n
            printf("# ");
        else
            printf("  "); 
    }
    cout<<endl;
```
<pre>
#
# #
#   #
#     #
#       #
# # # # # #
</pre>

```c++
// Program to print the patterns
int n = 7;
if(n % 2 != 0)
	n = n + 2; // if the number is odd then add two more n + 2
for(int i=1; i<=n; i++){
	// print the two spaces first
	for(int k=n-2; k>=1; k--){
		printf(" ");
	}
	for(int j=1; j<=n; j++)
	{
		if(i==1) // print stars only in first row
		  printf("@");
		
	}
	cout<<endl;
	
	// Print the side spaces in star patterns
	// Whatever will be value of N print spaces n + 2
	for(int k=n+2; k>=i; k--){
		printf(" ");
	}
	// To print the stars
	for(int j=1; j<=i; j++){
		  if(i % 2 !=0)
		  printf("* ");
	}
}
cout<<endl;
// print the stars in downward
for(int i=1; i<=n; i++){
    for(int k=n; k>=n-i; k--)
       printf("  ");
	for(int j=n-2; j>=i; j--){
		if(i % 2 !=0)
		   printf(" *");
	}
	cout<<endl;
    
}
// to print the @
for(int i=1; i<=n; i++){
    for(int k=n+2; k>=1; k--){
		printf(" ");
	}
	for(int j=1; j<=n; j++){
		if(j == n/2)
		   printf("@");
	}
	cout<<endl;
    
}
```
<pre>
       @@@@@@@@@
           *        
                 
         * * *        
               
       * * * * *        
             
     * * * * * * *        
           
   * * * * * * * * * 
     * * * * * * *
      
         * * * * *
          
             * * *
              
                 *
                  
                    
           @
           @
           @
           @
           @
           @
           @
           @
           @
</pre>

```c++
int n = 7;
if(n % 2 != 0)
	n = n + 2; // if the number is odd then add two more n + 2

for(int i=1; i<=n; i++){
    // prin the white spaces
    for(int j=i; j<=n; j++){
		printf("  ");
        // printf("%d ",j);
	}
    // Print the patterns
	for(int j=1; j<=i; j++){
		   printf("@ ");
	}
    // print the horizontal patterns
	for(int j=1; j<=n; j++){
           if(i==1)
		   printf("* ");
           else
           printf("  ");
	}
    // print the patterns again
	for(int j=1; j<=i; j++){
		   printf("@ ");
	}
	cout<<endl;
    
}
```
<pre>
                  @ * * * * * * * @ 
                @ @               @ @
              @ @ @               @ @ @ 
            @ @ @ @               @ @ @ @
          @ @ @ @ @               @ @ @ @ @ 
        @ @ @ @ @ @               @ @ @ @ @ @
      @ @ @ @ @ @ @               @ @ @ @ @ @ @
    @ @ @ @ @ @ @ @               @ @ @ @ @ @ @ @
  @ @ @ @ @ @ @ @ @               @ @ @ @ @ @ @ @ @
</pre>

```c++
// Program to print the patterns
int n = 7;
if(n % 2 != 0)
	n = n + 2; // if the number is odd then add two more n + 2

for(int i=1; i<=n; i++){
    for(int j=i; j<=n; j++){
		printf("  ");
        // printf("%d ",j);
	}
	for(int j=1; j<=i; j++){
		   printf("@ ");
	}
	for(int j=1; j<=n; j++){
           if(i==n)
		   printf("* ");
           else
           printf("  ");
	}
	for(int j=1; j<=i; j++){
		   printf("@ ");
	}
	cout<<endl;
    
}
```
<pre>
                  @                   @
                @ @                   @ @ 
              @ @ @                   @ @ @ 
            @ @ @ @                   @ @ @ @ 
          @ @ @ @ @                   @ @ @ @ @ 
        @ @ @ @ @ @                   @ @ @ @ @ @ 
      @ @ @ @ @ @ @                   @ @ @ @ @ @ @ 
    @ @ @ @ @ @ @ @                   @ @ @ @ @ @ @ @ 
  @ @ @ @ @ @ @ @ @ * * * * * * * * * @ @ @ @ @ @ @ @ @ 
</pre>


```c++
int n = 7;
int counter = 0; // to where bottom @ will start printing the patterns
// Program to print the patterns
// print the @ symbol
for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
        if(i==1)
		printf("@");
	}
}
printf("\n"); // the next pattern will start from a new line
// print the star pattern
for(int i=1; i<=n; i++){
// print the pattern but instead of pattern just print the blank spaces so it will push the patterns
for(int j=1; j<n; j++){
    // run the loop less then n;
		   printf(" ");
}
// then print the star pattern adjacent to the white space
for(int j=1; j<=i; j++){
		   printf("*");
}
printf("\n");
}
// for downward pyramid
// print the star pattern
// The outerloop will run n-1 times because we need to form the arrow shape otherwise the midline will printed twice
for(int i=1; i<=n-1; i++){
// print the pattern but instead of pattern just print the blank spaces so it will push the patterns
for(int j=1; j<n; j++){
    // run the loop less then n;
		   printf(" ");
}
// then print the star pattern adjacent to the white space
for(int j=n-1; j>=i; j--){
		   printf("*");
}
printf("\n");
}


// to print the @
counter = (n + 1)/2;
for(int i=1; i<=n; i++){
// print the @ smbols
// here we need to handle the space carefully
// first we need to print the spaces.
// we need to define also from where to where the spaces will print
for(int j=counter; j<=n-1; j++){
    // run the loop less then n-1;
		   printf(" ");
}
// This will print the @ after the spaces has been printed.
for(int j=1; j<=n; j++){
    if(i==1)
    printf("@");
    
    }
}

```
<pre>
@@@@@@@
      *
      **
      ***
      ****
      *****
      ******
      *******
      ******
      *****
      ****
      ***
      **
      *
   @@@@@@@
</pre>

```c++
// Patterns always work for odd number
int n = 7;
int mid = (n+1)/2;
// printf("%d",mid);
for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){        
            if(i == mid || j == mid ||(j==n && i>=mid /* for horizontal */) ||  /*for top right*/(i==1 && j>=mid) || (j==1 && i<=mid) || (i==n && j<=mid)/* below bottom left*/ )
                printf("# ");
            // To print the stars we have used it.
            // Explanation mid + 1 and mid - 1 print the stars after the vertical line and before the horizontal line respectively.
            // i == mid + 1 and i == mid - 1 print the line after and before the horizontal line respectively.
            else if(
                ((i && j == mid+1)&& i==mid-1) || ((i && j == mid+1)&& i==mid+1) || ((i && j == mid-1)&& i==mid-1) || ((i && j == mid-1)&& i==mid+1)
                )
            printf("0 ");    
            else
                printf("  ");
    }
    cout<<endl;
    }
```
<pre>
#     # # # #
#     #
#   0 # 0
# # # # # # #
    0 # 0   #
      #     #
# # # #     #
</pre>

### Downward Pyramid
```c++
// Just for practice we 

for(int i=1; i<=n; i++){
    for(int j=n+1-i; j<=n; j++){        
        printf("  "); // two white space
        // this loop is printing below shape but we have printed white spaces instead so that it will push the bottom loop pattern in right direction so we got the downward pyramid shape.
        /*
        * * * * * * *
          * * * * * *
            * * * * *
              * * * *
                * * *
                  * *
                    *
        */
    }
    for(int j=1; j<=n+1-i; j++){        
        printf(" #  "); // four white spaces
    }
    cout<<endl;
    }

```
<pre>
   #   #   #   #   #   #   #
     #   #   #   #   #   #
       #   #   #   #   #
         #   #   #   #
           #   #   #
             #   #
               #
</pre>