// This function checks if a given integer is a palindrome.
// A palindrome is a number that reads the same backward as forward.
bool isPalindrome(int x) {
    int original;
    long long reversed, last;
    if(x<0){return false;}
    original = x;
    reversed = 0;
    while (x > 0) { // Loop through each digit of the original number to reverse it.
        last = x % 10; // Extract the last digit of the number.
        reversed = reversed * 10 + last; // Build the reversed number by appending the last digit.
        x /= 10; // Remove the last digit from the original number.
    }
    // Check if the reversed number is equal to the original number.
    return (original == reversed);
}