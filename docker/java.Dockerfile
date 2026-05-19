FROM eclipse-temurin:11-jdk

WORKDIR /workspace/java/datastructures

CMD ["bash", "-lc", "java -Dorg.gradle.appname=gradlew -classpath gradle/wrapper/gradle-wrapper.jar org.gradle.wrapper.GradleWrapperMain build && java -Dorg.gradle.appname=gradlew -classpath gradle/wrapper/gradle-wrapper.jar org.gradle.wrapper.GradleWrapperMain clean test --info"]
