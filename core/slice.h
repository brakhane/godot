#ifndef SLICE_H
#define SLICE_H

//FIXME
struct Slice {
	//const Variant *start, *stop, *step;
	const int start, stop, step;
    //Slice(const Variant *p_start, const Variant *p_stop, const Variant *p_step): start(p_start), stop(p_stop), step(p_step) {}
Slice(const int start, const int stop, const int step): start(start), stop(stop), step(step) {}
};


#endif
