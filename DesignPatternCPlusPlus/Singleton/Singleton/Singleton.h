#pragma once
class Singleton
{
public:
    static Singleton* getInstance(void);
	void showMessage(void);

protected:
	Singleton(void){};

private:
	~Singleton(void);
	static Singleton* uniqueSingleton;
};





