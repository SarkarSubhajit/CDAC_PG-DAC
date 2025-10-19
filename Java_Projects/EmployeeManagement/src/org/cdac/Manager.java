package org.cdac;

public class Manager extends Employee {

	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;
	private float hra;
	
	public Manager(String name, String address, int age, char gender, float basicSalary, float hra) {
		super(name, address, age, gender, basicSalary);
		this.hra = hra;
	}

	public float getHra() {
		return hra;
	}

	public void setHra(float hra) {
		this.hra = hra;
	}

	@Override
	public String getDesignation() {
		String str = new String("Manager");
		return str;
	}
	
	@Override
	public float calculateSalary() {
		// TODO Auto-generated method stub
		return basicSalary + hra;
	}

}
