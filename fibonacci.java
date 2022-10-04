// Program to print fibonacci series followed by giver number by user...

import java.util.Scanner;

public class fibonacci {
	
	static int fib(int no)
    {
        if(no <= 1) {
        	return no;
        }
        else {
        	return fib(no - 1) + fib(no - 2);
        }
        
    }
	
	//-------------------MAIN------------------------

	public static void main(String[] args) {
		
		Scanner inp = new Scanner(System.in);
		
		while(true){
			
			System.out.print("Enter Number : ");
			int no = inp.nextInt();
			int stop = 000;
			if(no == stop) {                    // If user enter 000 process will stop..
				break;
			}
			else {
				for (int i = 0; i < no; i++) {
					System.out.print(fib(i) + " ");
		        }
				System.out.println(" ");
				}
			}
			
	}
}


//exit is a string , but we are taking input as integer ( int no = inp.nextInt(); ) , how to break while loop ?
