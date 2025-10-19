package org.cdac;
import org.cdac.utils.LinkedList;


/**
 * All Functionalities of Employee Management
 */
public class EmployeeManagement {

	static Employee [] arrayEmployee = new Employee[100];
	LinkedList<Employee> listEmployee = new LinkedList<>();
	
	static int count = 0;
	
	public void addManager(String name, String address, int age, boolean gender, float basicSalary, float hra) {
		listEmployee.add(new Manager(name, address, age, gender, basicSalary, hra));	
	}
	
	public void addEngineer(String name, String address, int age, boolean gender, float basicSalary, float overtime) {
		listEmployee.add(new Engineer(name, address, age, gender, basicSalary, overtime));
	}
	
	public void addSalesPerson(String name, String address, int age, boolean gender, float basicSalary, float commission) {
		listEmployee.add(new SalesPerson(name, address, age, gender, basicSalary, commission));
	}

	
	/**
	 * sort by Names using Bubble Sort
	 */
	public void sortEmployeesByName() {
		
		listEmployee.sortList(new EmployeeSorter(EmployeeField.NAME));
		
	}
	
	/**
	 * Filters through the array and finds only Managers
	 * @return Array of Employee reference
	 */
	public static Employee[] filterManager() {
		int tempCount = 0;
		for (Employee iTmp : arrayEmployee) {
			if (iTmp != null && iTmp instanceof Manager) {
				tempCount++;
			}
		}
		int index = 0;
		Employee[] arrManager = new Employee[tempCount];
		for (Employee iTmp : arrayEmployee) {
			if (iTmp != null && iTmp instanceof Manager) {
				arrManager[index++] = iTmp;
			}
		}
		return arrManager;
	}
	
	/**
	 * Filters through the array and finds only Engineer
	 * @return Array of Employee reference
	 */
	public static Employee[] filterEngineer() {
		int tempCount = 0;
		for (Employee iTmp : arrayEmployee) {
			if (iTmp != null && iTmp instanceof Engineer) {
				tempCount++;
			}
		}
		int index = 0;
		Employee[] arrEngineer = new Employee[tempCount];
		for (Employee iTmp : arrayEmployee) {
			if (iTmp != null && iTmp instanceof Engineer) {
				arrEngineer[index++] = iTmp;
			}
		}
		return arrEngineer;
	}
	
	/**
	 * Filters through the array and finds only SalesPerson
	 * @return Array of Employee reference
	 */
	public static Employee[] filterSalesPerson() {
		int tempCount = 0;
		for (Employee iTmp : arrayEmployee) {
			if (iTmp != null && iTmp instanceof SalesPerson) {
				tempCount++;
			}
		}
		
		Employee[] arrSalesPerson = new Employee[tempCount];
		int index = 0;
		for (Employee iTmp : arrayEmployee) {
			if (iTmp != null && iTmp instanceof SalesPerson) {
				arrSalesPerson[index++] = iTmp;
			}
		}
		return arrSalesPerson;
	}

}
