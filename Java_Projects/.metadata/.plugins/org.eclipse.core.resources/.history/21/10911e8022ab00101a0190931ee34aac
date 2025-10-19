package org.cdac;

import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;
import java.util.Scanner;
import java.util.stream.Collectors;

public class Entry {

	public static void main(String[] args) {
		
		EmployeeManagement objEmp = new EmployeeManagement();
		Scanner scanner = new Scanner(System.in);
		
		
		
		int choice;
		do {
			System.out.println("=============== MENU ===============");
			System.out.println("1. Add Employee");
			System.out.println("2. Display Employee");
			System.out.println("3. Display Employee Department Wise");
			System.out.println("4. Department Wise Count of Employee");
			System.out.println("5. Sort Employee on Joining Date");
			System.out.println("6. EXIT");
			System.out.println("=============== MENU ===============");
			System.out.println("Enter Your Choice");
			choice = scanner.nextInt();
			
			List<Integer> list = new LinkedList<>();
			
			try {
				switch(choice) {
				case 1: objEmp.loadFile("data.txt"); break;
				
				case 2: objEmp.displayAll(); break;
				
				case 3: objEmp.deptWiseEmployee().forEach(System.out::println); break;
				
				case 4: objEmp.deptWiseCount().forEach((a,b) -> System.out.println(a + " : " + b)); break;
				
				case 5: objEmp.sortByDate(); break;
					
				case 6: System.out.println("Exiting.."); break;
				
				default: System.out.println("Invalid Input"); break;
				}
			} catch (FileNotFoundException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			} catch (IOException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			} catch (ClassNotFoundException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		} while (choice != 6);
		
		
		scanner.close();
	}

}
