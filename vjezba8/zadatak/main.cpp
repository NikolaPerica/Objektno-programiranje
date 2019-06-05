#include "VideoGame.h"
#include "Fallout4.h"
#include "GodofWar.h"
#include "Darksouls.h"
#include "Witcher3.h"
#include "LastofUs2.h"
#include "counter.h"



int main(void)
{
	
	counter c;
	VideoGame* v[] = { new Witcher3, new Darksouls, new Fallout4, new LastofUs2, new
	GodofWar };
	size_t sz = sizeof v / sizeof v[0];
	for (unsigned i = 0; i < sz; ++i)
		c.add(*v[i]);
	std::cout << "Najzastupljenija platforma: " << c.najzastupljenija();
	
	getchar();
}
