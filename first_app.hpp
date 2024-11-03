#pragma once
#include "lve_window.hpp"
#include "lve_pipeline.hpp"

namespace lve
{
	class FirstApp
	{
	public:
		static constexpr int WIDTH = 1920;
		static constexpr int HEIGHT = 1080;
		void run();

	private: 
		LveWindow lveWindow{ WIDTH, HEIGHT, "VULKAN BOIS" };
		LvePipeline lvePipeline{ "shaders/simple_shader.vert.spv", "shaders/simple_shader.frag.spv" };
	};
}