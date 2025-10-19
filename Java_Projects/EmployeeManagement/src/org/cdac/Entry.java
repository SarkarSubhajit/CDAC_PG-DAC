package org.cdac;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.util.Collections;
import java.util.LinkedList;
import java.util.Scanner;

public class Entry {

	@SuppressWarnings("unchecked")
	public static void main(String[] args) throws FileNotFoundException {

		LinkedList<Employee> empList = new LinkedList<>();
		try (Scanner scanner = new Scanner(System.in)) {
			int choice;
			do {
				System.out.println("================== MENU ==================");
				System.out.println("1. Add Employee");
				System.out.println("2. Display All Employees");
				System.out.println("3. Save Employees");
				System.out.println("4. Load Employees");
				System.out.println("5. Sort Employees");
				System.out.println("6. Exit");
				System.out.println("================== MENU ==================");
				System.out.print("Please Enter Your Choice : ");
				choice = scanner.nextInt();
				
				EmployeeEnums enums = EmployeeEnums.fromChoice(choice);

				switch (enums) {
				case ADD: {
					int subChoice;
					do {
						// Employee add menu
						System.out.println("------------------ EMPLOYEE TYPE ------------------");
						System.out.println("1. Add Manager");
						System.out.println("2. Add Engineer");
						System.out.println("3. Add SalesPerson");
						System.out.println("4. Exit");
						System.out.println("------------------ EMPLOYEE TYPE ------------------");
						System.out.print("Please Enter Your Choice : ");
						subChoice = scanner.nextInt();

						EmployeeEnums addMenu = EmployeeEnums.fromChoice(subChoice);
						
						try {
							switch (addMenu) {

							case MANAGER: addEmployee(empList, scanner, 1); break;

							case ENGINEER: addEmployee(empList, scanner, 2); break;

							case SALESPERSON: addEmployee(empList, scanner, 3); break;

							case EXIT_ADD: System.out.println("Exiting Sub Menu..."); break;

							default: System.out.println("Invalid Input"); break;

							}
						} catch (InvalidInputException e) {
							System.out.println("Error : " + e.getMessage());
						} catch (Exception e) {
							System.out.println("Unknown Error : " + e.getMessage());
						}
					} while (subChoice != 4);
				}
					break;

				case DISPLAY: displayAll(empList); break;

				case SAVE:
					try (ObjectOutputStream out = new ObjectOutputStream(new FileOutputStream("employee.ser"))) {
						out.writeObject(empList);
						
					} catch (IOException e) {
						System.out.println("Error: " + e.getMessage());
					}
					break;

				case LOAD:
					try (ObjectInputStream out = new ObjectInputStream(new FileInputStream("employee.ser"))) {
						empList = (LinkedList<Employee>) out.readObject();
						
					} catch (IOException | ClassNotFoundException e) {
						System.out.println("Error: " + e.getMessage());
					}
					break;
					
				case SORT: {
					int subChoice;
					do {
						// Employee sort menu
						System.out.println("------------------ SORT MENU ------------------");
						System.out.println("1. Sort By Name");
						System.out.println("2. Sort By Designation");
						System.out.println("3. Exit");
						System.out.println("------------------ SORT MENU ------------------");
						System.out.print("Please Enter Your Choice : ");
						subChoice = scanner.nextInt();
						
						EmployeeEnums sortMenu = EmployeeEnums.fromChoice(subChoice);

						switch (sortMenu) {
						case NAME:
							empList.sort((emp1, emp2) -> emp1.getName().compareTo(emp2.getName()));
							displayAll(empList);
							break;

						case DESIGNATION: Collections.sort(empList); displayAll(empList); break;

						case EXIT_SORT: System.out.println("Exiting Sub Menu..."); break;

						default: System.out.println("Invalid Input"); break;

						}
					} while (subChoice != 3);
					break;
				}
				case EXIT_MAIN_MENU: System.out.println("Exiting Menu..."); break;
				
				default: System.out.println("Invalid Input"); break;
				}
			} while (choice != 6);
		}

	}

	public static void addEmployee(LinkedList<Employee> employees, Scanner scanner, int choice)
			throws InvalidInputException {

		scanner.nextLine();

		// Collect common employee details		
		String name = EntryHelper.getValidString(scanner, "Enter Name: ");
		String address = EntryHelper.getValidString(scanner, "Enter Address: ");
		int age = EntryHelper.getValidAge(scanner, "Enter Age: ");
		char gender = EntryHelper.getValidGender(scanner, "Enter Gender (M-Male/F-Female/O-Other): ");
		float basicSalary = EntryHelper.getValidFloat(scanner, "Enter Basic Salary: ");

		switch (choice) {
		case 1:
			float hra = EntryHelper.getValidFloat(scanner, "Enter HRA : ");
			employees.add(new Manager(name, address, age, gender, basicSalary, hra));
			break;

		case 2:
			float overTimePay = EntryHelper.getValidFloat(scanner, "Enter Overtime Pay : ");
			employees.add(new Engineer(name, address, age, gender, basicSalary, overTimePay));
			break;

		case 3:
			float commission = EntryHelper.getValidFloat(scanner, "Enter Commission : ");
			employees.add(new SalesPerson(name, address, age, gender, basicSalary, commission));
			break;

		default:
			System.out.println("Invalid Input");
			break;
		}

	}

	public static void displayAll(LinkedList<Employee> empList) {
		for (Employee emp : empList) {
			System.out.println("[ID : " + emp.getId() + "\tDesignation : " + emp.getDesignation() + "\tName : " + emp.getName() + "\nAge : "
					+ emp.getAge() + "\tGender : " + emp.getGender() + "\tTotal Salary : " + emp.calculateSalary() + "]");
		}
	}
}
