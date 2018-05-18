CXX = clang++ -std=c++11 -g
GAME = ns.out

INCLUDEDIR = include
SRCDIR = sources
OBJDIR = objects

INCLUDES = $(wildcard $(INCLUDEDIR)/*.hpp)
SOURCES = $(wildcard $(SRCDIR)/*.cpp)
OBJS = $(SOURCES:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)

LIBLINK = -lsfml-system -lsfml-graphics -lsfml-window

all : $(GAME)

$(GAME): $(OBJS)
	$(CXX) $(OBJS) $(LIBLINK) -o $@

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	$(CXX) -c $< -o $@ -I$(INCLUDEDIR)

clean:
	$(RM) $(OBJS) $(GAME)
