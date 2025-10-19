package org.cdac;
import org.cdac.utils.Console;

public class Entry {

	public static void main(String[] args) {
		
		
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
			choice = Console.getInt();
			
			EmployeeManagement obj = new EmployeeManagement();
			
	        // Adding Managers
	        obj.addManager("Alice Johnson", "123 Elm St", 45, true, 80000f, 15000f);
	        obj.addManager("Diana Lee", "321 Birch St", 38, false, 90000f, 20000f);
	        obj.addManager("George Harris", "234 Elm St", 50, true, 95000f, 25000f);
	        obj.addManager("Jasmine Cook", "567 Birch St", 40, false, 85000f, 18000f);
	        obj.addManager("Mike Adams", "876 Elm St", 42, true, 88000f, 22000f);

	        // Adding Engineers
	        obj.addEngineer("Bob Smith", "456 Oak St", 30, true, 60000f, 5000f);
	        obj.addEngineer("Evan White", "654 Maple St", 35, true, 55000f, 4000f);
	        obj.addEngineer("Helen King", "345 Oak St", 27, false, 65000f, 6000f);
	        obj.addEngineer("Kenny Wright", "432 Maple St", 29, true, 67000f, 7000f);
	        obj.addEngineer("Nina Clark", "543 Oak St", 26, false, 72000f, 5500f);

	        // Adding SalesPerson
	        obj.addSalesPerson("Charlie Brown", "789 Pine St", 28, true, 45000f, 10000f);
	        obj.addSalesPerson("Fiona Green", "987 Cedar St", 25, false, 40000f, 12000f);
	        obj.addSalesPerson("Isaac Patel", "876 Pine St", 32, true, 42000f, 8000f);
	        obj.addSalesPerson("Laura Turner", "765 Cedar St", 33, false, 48000f, 9500f);
	        obj.addSalesPerson("Oliver Taylor", "109 Pine St", 31, true, 46000f, 11000f);
			
			switch (choice) {
			case 1: {
				int subChoice;
				do {
					System.out.println("------------------ EMPLOYEE TYPE ------------------");
					System.out.println("1. Add Manager");
					System.out.println("2. Add Engineer");
					System.out.println("3. Add SalesPerson");
					System.out.println("4. Exit");
					System.out.println("------------------ EMPLOYEE TYPE ------------------");
					System.out.print("Please Enter Your Choice : ");
					subChoice = Console.getInt();
					
					// default values for all employees
					
					System.out.print("Enter Name : ");
					String name = Console.getString();
					
					System.out.print("Enter Address : ");
					String address = Console.getString();
					
					System.out.print("Enter Age : ");
					int age = Console.getInt();
					
					System.out.print("Enter Gender : ");
					boolean gender = Console.getBoolean();
					
					System.out.print("Enter Basic Salary : ");
					float basicSalary = Console.getFloat();
					
					switch(subChoice) {
					case 1: {
						
						// Managers
						System.out.print("Enter HRA : ");
						float hra = Console.getFloat();
		
						obj.addManager(name, address, age, gender, basicSalary, hra);
					}
					break;
					case 2: {
						
						// Engineers
						System.out.print("Enter Overtime Pay : ");
						float overtime = Console.getFloat();
						
						obj.addEngineer(name, address, age, gender, basicSalary, overtime);
					}
					break;
					case 3: {
						
						// SalesPersons
						System.out.print("Enter Commission : ");
						float commission = Console.getFloat();
						
						obj.addSalesPerson(name, address, age, gender, basicSalary, commission);
					}
					break;
					default: {
						System.out.println("..............Exiting..............");
						break;
					}
					}
				} while(subChoice != 4);
			}
			break;
			case 2: {
				System.out.println("------------------ ALL EMPLOYEES ------------------");
				for (Employee iTmp = obj.listEmployee.getFirst(); iTmp != null; iTmp = obj.listEmployee.getNext()) {
					System.out.println("[ Designation : " + iTmp.getDesignation() + "\tName : " + iTmp.getName() + "\tTotal Salary : " + iTmp.computeSalary() + " ]");	
				}
			}
			break;
			case 3: break;
			
			case 4: break;
			
			case 5: {
				int subChoice;
				do {
					System.out.println("------------------ SORTING ------------------");
					System.out.println("1. Sort By Name");
					System.out.println("2. Sort By Designation");
					System.out.println("3. Exit");
					System.out.println("------------------ SORTING ------------------");
					System.out.print("Please Enter Your Choice : ");
					subChoice = Console.getInt();
					
					switch(subChoice) {
					case 1: {
						System.out.println("------------------ SORTED BY NAME ------------------");
						obj.sortEmployeesByName();
						for (Employee iTmp = obj.listEmployee.getFirst(); iTmp != null; iTmp = obj.listEmployee.getNext()) {
							if (iTmp != null)
								System.out.println("[ Designation : " + iTmp.getDesignation() + "\tName : " + iTmp.getName() + "\tTotal Salary : " + iTmp.computeSalary() + " ]");	
						}
					}
					break;
					case 2: {
						System.out.println("------------------ MANAGERS ------------------");
						for (Employee tempEmployee : EmployeeManagement.filterManager()) {
							Manager objManager = (Manager) tempEmployee; 
							System.out.println("[ Name : " + tempEmployee.getName() + "\tHRA : " + objManager.getHra() + "\tTotal Salary : " + tempEmployee.computeSalary() + " ]");
						}
						System.out.println("------------------ ENGINEER ------------------");
						for (Employee tempEmployee : EmployeeManagement.filterEngineer()) {
							Engineer objEngineer = (Engineer) tempEmployee;
							System.out.println("[ Name : " + tempEmployee.getName() + "\tOverTime Pay : " + objEngineer.getOvertime() + "\tTotal Salary : " + tempEmployee.computeSalary() + " ]");
						}
						System.out.println("------------------ SALESPERSON ------------------");
						for (Employee tempEmployee : EmployeeManagement.filterSalesPerson()) {
							SalesPerson objSalesPerson = (SalesPerson) tempEmployee;
							System.out.println("[ Name : " + tempEmployee.getName() + "\tCommission : " + objSalesPerson.getCommission() + "\tTotal Salary : " + tempEmployee.computeSalary() + " ]");
						}
					}
					break;
					default:
						System.out.println("..............Exiting..............");
						break;
					}
				} while(subChoice < 3);
			}
			break;
			default: {
				System.out.println("..............Exiting..............");
			}
			break;
			
			}
		} while(choice != 6);
	}
}