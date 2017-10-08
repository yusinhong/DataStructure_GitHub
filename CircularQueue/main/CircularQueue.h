#pragma once
template<class T>
class CCircularQueue
{
private:
	unsigned int m_Size;
	unsigned int m_Head;
	unsigned int m_Tail;
	unsigned int m_RealNum;
	T*m_Elements;
public:
	CCircularQueue(){
		m_Size = 0;
		m_Head = 0;
		m_Tail = 0;
		m_RealNum = 0;
		m_Elements = NULL;
	}
	~CCircularQueue(){
		delete[]m_Elements;
	};

	bool SetSize(unsigned int size)
	{
		if (m_Elements)delete[]m_Elements;
		m_Elements = new T[size];
		if (!m_Elements)return false;
		m_Size = size;
		return true;
	};
	bool Push(T value)
	{
		if (m_RealNum == m_Size)return false;
		if (m_Tail + 1 > m_Size)
		{
			m_Tail=m_Tail - m_Size;
			m_Elements[m_Tail++] = value;
		}
		else m_Elements[m_Tail++] = value;
		m_RealNum++;
		return true;
	};
	T Pop()
	{
		if (m_RealNum == 0)return 0;
		m_RealNum--;
		if (m_Head + 1 > m_Size)
		{
			m_Head = m_Head - m_Size;
			return m_Elements[m_Head++];
		}
		else return m_Elements[m_Head++];
	};
};