void scroll_bowser_3_dl_Sphere_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 239;
	int width = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(bowser_3_dl_Sphere_mesh_layer_5_vtx_0);

	deltaX = (int)(5.0 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_bowser_3() {
	scroll_bowser_3_dl_Sphere_mesh_layer_5_vtx_0();
};
