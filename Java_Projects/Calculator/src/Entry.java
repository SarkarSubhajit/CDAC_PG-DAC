
public class Entry {

	public static void main(String[] args) {
		
		int choice;
		do {
			System.out.println("1. Enter New Numbers");
			System.out.println("2. Exit");
			System.out.print("Enter Your Choice : ");
			choice = Console.getInt();
			
			switch(choice) {
			case 1: {
				System.out.print("Enter First Number : ");
				String num1 = Console.getString();
				System.out.print("Enter Second Number : ");
				String num2 = Console.getString();
				
				int subChoice;
				do {
					System.out.println("=================================");
					System.out.println("1. ADD");
					System.out.println("2. SUBTRACT");
					System.out.println("3. MULTIPLY");
					System.out.println("4. DIVIDE");
					System.out.println("5. Exit");
					System.out.print("Enter Your Choice : ");
					subChoice = Console.getInt();
					
					switch(subChoice) {
					case 1: System.out.println("Addition is : " + Calculator.add(num1, num2)); break;
					case 2: System.out.println("Subtraction is : " + Calculator.subtract(num1, num2)); break;
					case 3: System.out.println("Multiplication is : " + Calculator.multiply(num1, num2)); break;
					case 4: System.out.println("Division is : " + Calculator.divide(num1, num2)); break;
					case 5: System.out.println("Exiting...."); break;
					default: System.out.println("Invalid Input...."); break;
					}
				} while(subChoice != 5);
			}
			break;
			case 2: System.out.println("Exiting...."); break;
			default: System.out.println("Invalid Input...."); break;
			}
		} while(choice != 2);
		
	}

}
