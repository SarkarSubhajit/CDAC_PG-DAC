package org.cdac;

public enum EmployeeEnums {

	ADD(1),
	DISPLAY(2),
	SAVE(3),
	LOAD(4),
	SORT(5),
	EXIT_MAIN_MENU(6),
	MANAGER(1),
	ENGINEER(2),
	SALESPERSON(3),
	EXIT_ADD(4),
	NAME(1),
	DESIGNATION(2),
	EXIT_SORT(3);
	
	private int choice;
	
	EmployeeEnums(int choice) {
		this.choice = choice;
	}
	
	public int getChoice() { return choice; }
	
	public static EmployeeEnums fromChoice(int choice) {
		for (EmployeeEnums val : EmployeeEnums.values()) {
			if (val.getChoice() == choice) {
				return val;
			}
		}
		throw new IllegalArgumentException("Invalid Input");
	}
	
}
