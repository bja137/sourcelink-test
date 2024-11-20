void bar(void) {
	*(int*)0 = 0;
}

void foo(void) {
	bar();
}

int main() {
	foo();
}