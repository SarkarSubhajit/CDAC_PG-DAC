package org.cdac.utils;

public interface List<T> extends TraverseList<T> {

	public void add(T data);
	public void delete(int index);
}
