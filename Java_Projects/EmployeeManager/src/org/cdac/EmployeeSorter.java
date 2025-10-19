package org.cdac;

import org.cdac.utils.Sorter;

public class EmployeeSorter implements Sorter<Employee> {

	EmployeeField field;
	
	public EmployeeSorter(EmployeeField field) {
		this.field = field;
	}
	
	@Override
	public int compare(Employee emp1, Employee emp2) {
		switch(field) {
		case NAME:
			return emp1.getName().compareTo(emp2.getName());
		case AGE:
			return emp1.getAge() - emp2.getAge();
		default:
			return 0;
		}
	}
	public int compareTo(Employee emp1, Employee emp2) {
		return emp1.getName().compareTo(emp2.getName());
	}
	
}
