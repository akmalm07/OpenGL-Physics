#pragma once

#include "config.h"

#include "physics/include/bound_base.h"



namespace physics
{
	class SphereBound : public BoundTypeBase
	{
	public:

		SphereBound() = default;

		SphereBound(const glm::vec3& center, float radius);
		
		SphereBound(const glm::vec3& min,const glm::vec3& max, float radius);

		std::unique_ptr<BoundTypeBase> clone() const override;

		glType::BoundType get_bound_type() const override final;

		void init(const glm::vec3& center, float radius);

		float get_radius() const;

		void move_reletive_to_dist(const glm::vec3& dist);
		
		TouchingData is_touching(const SphereBound& other) const override final;

		TouchingData is_touching(const AABB& other) const override final;

		TouchingData is_touching(const OBB& other) const override final;

	private:
		float _radius{ 1.0f };

		friend class BoundTypeBase;
	};


}

