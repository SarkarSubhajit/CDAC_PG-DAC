package org.cdac.utils;

import java.util.Iterator;
import java.util.NoSuchElementException;

public class LinkedList<T> implements List<T>,Iterable<T> {

	T data;

	Node<T> start;

	Node<T> end;

	Node<T> current;

	int maxCount = 0;

	public void add(T data) {

		Node<T> tmpObj = new Node<>(data);

		if (start == null)
			start = end = current = tmpObj;
		else {
			end.next = tmpObj;
			tmpObj.previous = end;
			end = tmpObj;
		}

		maxCount++;
	}
	
	public void delete(int index) {
		if (start == null || index > maxCount - 1)
			return;
		
		else if (start == end)
			start = end = current = null;
		
		else if (index == 0) {
			start = start.next;
			start.previous = null;
		}
		
		else if(index == maxCount - 1) {
			end = end.previous;
			end.next = null;
		}
		
		else {
			Node<T> tempNode = start;
			
			for (int iTmp = 0; iTmp < index; iTmp++, tempNode = tempNode.next);
			
			tempNode.previous.next = tempNode.next;
			tempNode.next.previous = tempNode.previous;
			
			current = start;
		}
		maxCount--;
	}
	
	public int getMaxCOunt() {
		return maxCount;
	}

	public T getFirst() {
		if (start == null)
			return null;
		else {
			current = start;
			return current.data;
		}
	}

	public T getLast() {
		if (start == null)
			return null;
		else {
			current = end;
			return current.data;
		}
	}

	public T getNext() {
		if (start == null || current.next == null)
			return null;
		else {
			current = current.next;
			return current.data;
		}
	}

	public T getPrevious() {
		if (start == null || current.previous == null)
			return null;
		else {
			current = current.previous;
			return current.data;
		}
	}

	@Override
	public Iterator<T> iterator() {
		return new ListIterator();
	}

	
	private class ListIterator implements Iterator<T> {
		
		Node<T> tmpNode = start;
		
		@Override
		public boolean hasNext() {
			return tmpNode != null;
		}
		
		@Override
		public T next() {
			
			if (!hasNext())
				throw new NoSuchElementException("End of List");
			
			T data = tmpNode.data;
			tmpNode = tmpNode.next;
			return data;
		}
	}
	
	public void sortList(Sorter<T> sorter) {
		if (start == null || start.next == null)
			return;
		
		// Bubble Sort using Sorter class
		for (int iTmp = 0; iTmp < maxCount - 1; iTmp++) {
			Node<T> tempNode = start;
			for (int jTmp = 0; jTmp < maxCount - 1 - iTmp; jTmp++) {
				if (sorter.compare(tempNode.data, tempNode.next.data) > 0) {
					T temp = tempNode.data;
					tempNode.data = tempNode.next.data;
					tempNode.next.data = temp;
				}
				tempNode = tempNode.next;
			}
		}
	}

	
}
