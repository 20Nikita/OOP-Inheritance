#ifndef _�������_�
#define _�������_�
#include <SFML/Graphics.hpp>
using namespace sf;


/*-----------------------  ����� �������������� -------------------------*/
class ��������������
{
protected:		//������������� ����������� �������� (������������ 
				//������) ����� ������ � ������� ������
	int X;		//���������� X
	int Y;		//���������� Y

public:   //��� ������ �������� ����� ���� � ���������

	��������������(int InitX, int InitY);	//�����������
	��������������() {}						//�����������
	~��������������();						//����������
	int GetX();								//�������� X ���������� �����
	int GetY();								//�������� Y ���������� �����
};//end class Location

/*-----------------------  ����� ����� ----------------------------------*/
class ����� : public ��������������
{
protected:							
	bool �����;		//�������� ����� ��� ���
	Sprite �����;
	Texture t;
public:
	�����(int InitX, int InitY, Texture& �����);	//����������� ������
	�����() {}										//����������� ������
	~�����();										//����������
	bool IsVisible();								//������ ��� ���������� �����
	//����������� �������
	void �����������(int NewX, int NewY);	//����������� ������
	void ����������(int Step);				//���������� ������
	void Show();							//�������� ������ �����
	void Hide();							//�������� ������ �����
	void ����������(RenderWindow& window);	//���������� ������ �����

};//end class Point

/*-----------------------  ����� ������������� ----------------------------------*/
class ������������� : public �����
{
protected:
	int ������;
	int ������;

public:
	�������������(int InitX, int InitY, Texture& �����, int �, int �);				//����������� ������
	�������������() {}																//����������� ������
	~�������������();																//����������
	void Set(int InitX, int InitY, Texture& �����, int �, int �);					//�������� ������ ��������������
	//����������� �������
	void ����������(RenderWindow& window);									//���������� ������ �����
};//end class Point

/*-----------------------  ����� ����˨� ----------------------------------*/
class ����˨� : public �������������
{
protected:
	������������� ������;
	������������� �����;
	������������� �����;

public:
	����˨�(int InitX, int InitY, Texture& �����, int �);	//����������� ������
	~����˨�();						//����������

	//����������� �������
	void ����������(RenderWindow& window);	//���������� ������ �����
	void ����������(int Step);				//���������� ������
	void �����������(int NewX, int NewY);	//����������� ������
	void Show();							//�������� ������ �����
	void Hide();							//�������� ������ �����
	void ��������������(int �);				//�������� ������ �����
};//end class Point

#endif