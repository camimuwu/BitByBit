class Operacion {

    private:

        float A;
        float B;

    public:

        Operacion();
        ~Operacion();

        void setA(float a);
        void setB(float b);

        virtual void operar() = 0;
};