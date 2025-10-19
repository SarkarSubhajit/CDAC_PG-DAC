package org.cdac;

public class SalesPerson extends Employee {

	private float commission;
	
	public SalesPerson(String name, String address, int age, boolean gender, float basicSalary, float commission) {
		super(name, address, age, gender, basicSalary);
		// TODO Auto-generated constructor stub
		this.commission = commission;
	}

	public float getCommission() {
		return commission;
	}

	public void setCommission(float commission) {
		this.commission = commission;
	}

	@Override
	public float computeSalary() {
		// TODO Auto-generated method stub
		return basicSalary + commission;
	}
	
	public String getDesignation() {
		return "SalesPerson";
	}
}
