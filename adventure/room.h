class room
{
public:
	room(): princess(0), monster(0){};
	virtual ~room(){};
	virtual room* go_down();
	virtual room* go_left(){};
	virtual room* go_right(){};
	virtual room* go_up(){};
	virtual void showinfo();
	virtual void set_princess();
	virtual void set_monster();
	virtual void set_downexit(room* p);
	virtual int iswin(room* p, room *lobby, int found, int win);
	virtual int islose(room*p, int lose);
	virtual int isfound(room* p, int found);
	int princess;
	int monster;
private:
	room* downexit;	
};

class room_A: public room
{
public:
	room_A(){};
	virtual ~room_A(){};
	virtual room* go_left();
    virtual void showinfo();
    virtual void set_leftexit(room* p);
private:
	room* leftexit;
};

class room_B: public room_A
{
public:
	room_B(){};
	virtual ~room_B(){};
	virtual room* go_right();
	virtual void showinfo();
	virtual void set_rightexit(room* p);
private:
	room* rightexit;
};

class room_lobby: public room_B
{
public:
	room_lobby(){};
	virtual ~room_lobby(){};
	virtual room* go_up();
	virtual void showinfo();
	virtual void set_upexit(room* p);
private:
	room* upexit;
};