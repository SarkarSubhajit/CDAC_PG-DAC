package org.cdac;

public class Engineer extends Employee {

	private float overtime;
	
	public Engineer(String name, String address, int age, boolean gender, float basicSalary, float overtime) {
		super(name, address, age, gender, basicSalary);
		// TODO Auto-generated constructor stub
		this.overtime = overtime;
	}

	public float getOvertime() {
		return overtime;
	}

	public void setOvertime(float overtime) {
		this.overtime = overtime;
	}

	@Override
	public float computeSalary() {
		// TODO Auto-generated method stub
		return basicSalary + overtime;
	}
	
	public String getDesignation() {
		return "Engineer";
	}
}
