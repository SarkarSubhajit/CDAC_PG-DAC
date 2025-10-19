package org.cdac;

public class Engineer extends Employee {

	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;
	private float overTimePay;
	
	public Engineer(String name, String address, int age, char gender, float basicSalary, float overTimePay) {
		super(name, address, age, gender, basicSalary);
		// TODO Auto-generated constructor stub
		this.overTimePay = overTimePay;
	}

	public float getOverTimePay() {
		return overTimePay;
	}

	public void setOverTimePay(float overTimePay) {
		this.overTimePay = overTimePay;
	}
	
	@Override
	public String getDesignation() {
		String str = new String("Engineer");
		return str;
	}

	@Override
	public float calculateSalary() {
		// TODO Auto-generated method stub
		return basicSalary + overTimePay;
	}

}
