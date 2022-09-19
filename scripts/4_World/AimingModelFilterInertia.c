modded class AimingModelFilterInertia {
	override float computeInertiaMultiplier() {
		float m = super.computeInertiaMultiplier();
		if (getWeapon().IsBipodDeployed() && getWeapon().Bipod().IsBipodInUse()) {
			return 1;
		}
		return m;
	}
}