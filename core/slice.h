#ifndef SLICE_H
#define SLICE_H

#include <assert.h>
#include <variant.h>

//FIXME
struct Slice {
	const Variant start, stop, step;

	Slice(const Variant start, const Variant stop, const Variant step)
		: start(start), stop(stop), step(step) {
		/*		assert(start.get_type() == Variant::INT || start.get_type() == Variant::NIL);
		assert(stop.get_type() == Variant::INT || stop.get_type() == Variant::NIL);
		assert(step.get_type() == Variant::INT || step.get_type() == Variant::NIL);
		*/
	}
};


#endif
