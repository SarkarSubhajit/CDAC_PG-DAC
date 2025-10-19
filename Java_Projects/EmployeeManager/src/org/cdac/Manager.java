package org.cdac;

public class Manager extends Employee {

	private float hra;
	
	public Manager(String name, String address, int age, boolean gender, float basicSalary, float hra) {
		super(name, address, age, gender, basicSalary);
		// TODO Auto-generated constructor stub
		this.hra = hra;
	}

	public float getHra() {
		return hra;
	}
	public void setHra(float hra) {
		this.hra = hra;
	}

	@Override
	public float computeSalary() {
		// TODO Auto-generated method stub
		return basicSalary + hra;
	}
	
	public String getDesignation() {
		return "Manager";
	}

}
