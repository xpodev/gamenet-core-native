#pragma once

#include <concepts>
#include <stdint.h>


namespace xpo {
	namespace net {
		template <class T>
		concept IServer = requires (T& t) {
			t.start(std::declval<uint16_t>());
			t.stop();
			t.update();
		};
	}
}
