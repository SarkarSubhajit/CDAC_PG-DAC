package org.cdac;

import java.util.Scanner;

public class EntryHelper {

	// Get a valid integer input
	public static int getValidAge(Scanner scanner, String prompt) {
		int value = -1;
		while (value < 18 || value > 55) {
			System.out.print(prompt);
			try {
				value = scanner.nextInt();
				if (value < 18 || value > 55) {
					System.out.println("Age must be between 18 and 55.");
				}
				scanner.nextLine();
			} catch (Exception e) {
				System.out.println("Invalid input. Please enter a valid integer.");
				scanner.nextLine(); // Consume the invalid input
			}
		}
		return value;
	}

	public static int getValidInteger(Scanner scanner, String prompt) {
		int value = -1;
		while (value < 0) {
			System.out.print(prompt);
			try {
				value = scanner.nextInt();
				if (value < 0) {
					System.out.println("Input must be postive");
				}
				scanner.nextLine();
			} catch (Exception e) {
				System.out.println("Invalid input. Please enter a valid integer.");
				scanner.nextLine(); // Consume the invalid input
			}
		}
		return value;
	}

	// Get a valid float input (positive, within a range if needed)
	public static float getValidFloat(Scanner scanner, String prompt) {
		float value = -1;
		while (value < 0) {
			System.out.print(prompt);
			try {
				value = scanner.nextFloat();
				if (value < 0) {
					System.out.println("Input must be greater than 0.");
				}
				scanner.nextLine();
			} catch (Exception e) {
				System.out.println("Invalid input. Please enter a valid number.");
				scanner.nextLine(); // Consume the invalid input
			}
		}
		return value;
	}

	// Get a valid String input (non-empty)
	public static String getValidString(Scanner scanner, String prompt) {
		String value = "";
		while (value.trim().isEmpty()) {
			System.out.print(prompt);
			value = scanner.nextLine();
			if (value.trim().isEmpty()) {
				System.out.println("Input cannot be empty.");
			}
		}
		return value;
	}

	// Get a valid character input (only 'M', 'F', 'O')
	public static char getValidGender(Scanner scanner, String prompt) {
		char value = ' ';
		while (value != 'M' && value != 'F' && value != 'O') {
			System.out.print(prompt);
			String input = scanner.nextLine();
			if (input.length() == 1) {
				value = Character.toUpperCase(input.charAt(0));
				if (value != 'M' && value != 'F' && value != 'O') {
					System.out.println("Invalid input. Please enter M, F, or O.");
				}
			} else {
				System.out.println("Invalid input. Please enter only one character (M, F, or O).");
			}
		}
		return value;
	}

}
