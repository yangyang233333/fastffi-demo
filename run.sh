mvn clean package

./build_native.sh

export LD_LIBRARY_PATH=/home/qianyy/tugraph-db/java-testfastffi
mvn exec:java -Dexec.mainClass="Main"
#java -Djava.library.path=. -jar target/java-testfastffi-1.0-SNAPSHOT.jar
