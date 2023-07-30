
int minCharsforPalindrome(string str) {
	int n = str.size(), i = 0, j = n-1, k = j;
 
    while(j >= i){

        if(str[i] != str[j]){

            i = 0;

            k--;

            j = k;

        }

        else{

            j--;

            i++;

        }

    }

 

    return n-1-k;
	
}
