// ------------
// Blink an LED
// ------------

/*-------------

We've heavily commented this code for you. If you're a pro, feel free to ignore it.

Comments start with two slashes or are blocked off by a slash and a star.
You can read them, but your device can't.
It's like a secret message just for you.

Every program based on Wiring (programming language used by Arduino, and Particle devices) has two essential parts:
setup - runs once at the beginning of your program
loop - runs continuously over and over

You'll see how we use these in a second. 

This program will blink an led on and off every second.
It blinks the D7 LED on your Particle device. If you have an LED wired to D0, it will blink that LED as well.

-------------*/


// First, we're going to make some variables.
// This is our "shorthand" that we'll use throughout the program:

int led1 = D7; // Instead of writing D0 over and over again, we'll write led1
// You'll need to wire an LED to this one to see it blink.



void setup() {

  // We are going to tell our device that D0 and D7 (which we named led1 and led2 respectively) are going to be output
  // (That means that we will be sending voltage to them, rather than monitoring voltage that comes from them)

  // It's important you do this here, inside the setup() function rather than outside it or in the loop function.

 pinMode(led1, OUTPUT);
 // pinMode(led2, OUTPUT);
 

}
	void loop() {
	    
	    // H
	    di ();
	    di ();
	    di ();
	    dit ();
	    
	    gap();
	    
	    // A
	    di ();
	    dah ();
	 
	    
	    gap();
	    
	    
	    // N
	    dah ();
	    dit ();
	   
	    
	    gap();
	    
	    
	    // K
	    dah();
	    di();
	    dah();
	    
	    gap();
	    
	    
	    
	}
	

	void di() {
	    
	  // To blink the LED, first we'll turn it on...
	  digitalWrite(led1, HIGH);
	  
	  // We'll leave it on for 0.5 second to represent a dot
	  delay(500);
	

	  // Then we'll turn it off...
	  digitalWrite(led1, LOW);
	

	  // Wait 0.5 second...
	  delay(500);
	  
	}
	

	void dah () {
	    
	      // To blink the LED, first we'll turn it on...
	  digitalWrite(led1, HIGH);
	  
	  // We'll leave it on for 1 second to represent a line
	  delay(1000);
	

	  // Then we'll turn it off...
	  digitalWrite(led1, LOW);
	

	  // Wait 0.5 second...
	  delay(500);
	    
	}
	
	
	void dit () {
	    
	      // To blink the LED, first we'll turn it on...
	  digitalWrite(led1, HIGH);
	  
	  // We'll leave it on for 0.6 second to represent a line
	  delay(600);
	

	  // Then we'll turn it off...
	  digitalWrite(led1, LOW);
	

	  // Wait 0.5 second...
	  delay(500);
	    
	}
	
	

void gap () {
	    
	    delay(1000);
	    
	}

 
 
 


