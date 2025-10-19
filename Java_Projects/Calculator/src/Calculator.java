
public class Calculator {
	
	public static String add(String input1, String input2) {
		if (input1.contains(".") || input2.contains(".")) {
			float num1 = Float.parseFloat(input1);
			float num2 = Float.parseFloat(input2);
			float addition = num1 + num2;
			return Float.toString(addition);
		}
		else {
			int num1 = Integer.parseInt(input1);
			int num2 = Integer.parseInt(input2);
			int addition = num1 + num2;
			return Integer.toString(addition);
		}
	}
	
	public static String subtract(String input1, String input2) {
		if (input1.contains(".") || input2.contains(".")) {
			float num1 = Float.parseFloat(input1);
			float num2 = Float.parseFloat(input2);
			float subtraction = num1 - num2;
			return Float.toString(subtraction);
		}
		else {
			int num1 = Integer.parseInt(input1);
			int num2 = Integer.parseInt(input2);
			int subtraction = num1 - num2;
			return Integer.toString(subtraction);
		}
	}
	
	public static String multiply(String input1, String input2) {
		if (input1.contains(".") || input2.contains(".")) {
			float num1 = Float.parseFloat(input1);
			float num2 = Float.parseFloat(input2);
			float multiplication = num1 * num2;
			return Float.toString(multiplication);
		}
		else {
			int num1 = Integer.parseInt(input1);
			int num2 = Integer.parseInt(input2);
			int multiplication = num1 * num2;
			return Integer.toString(multiplication);
		}
	}
	
	public static String divide(String input1, String input2) {
		if (input1.contains(".") || input2.contains(".")) {
			float num1 = Float.parseFloat(input1);
			float num2 = Float.parseFloat(input2);
			if (num2 == 0.0f) return null;
			else {
				float division = (float) num1 / num2;
			return Float.toString(division);
			}
		}
		else {
			int num1 = Integer.parseInt(input1);
			int num2 = Integer.parseInt(input2);
			if (num2 == 0) return null;
			else {
			float division = (float) num1 / num2;
			return Float.toString(division);
			}
		}
	}
	
//	public static float add(float num1, float num2) { return num1 + num2; }
//	
//	public static int subtract(int num1, int num2) { return num1 - num2; }
//	
//	public static float subtract(float num1, float num2) { return num1 - num2; }
//	
//	public static int multiply(int num1, int num2) { return num1 * num2; }
//	
//	public static float multiply(float num1, float num2) { return num1 * num2; }
//	
//	public static int divide(int num1, int num2) { return num1 / num2; }
//	
//	public static float divide(float num1, float num2) { return num1 / num2; }
}
