LIB = lib
TARGET = netproxy
SOURCE = src

all: 
	cd $(LIB) && $(MAKE) all 
	cd $(SOURCE) && $(MAKE) all
	
	cp -f $(SOURCE)/$(TARGET) .

clean:
	cd $(SOURCE) && $(MAKE) clean
	cd $(LIB) && $(MAKE) clean

	rm -f $(TARGET)
