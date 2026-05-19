FROM node:12-bullseye

WORKDIR /workspace/javascript

ENV CI=true

CMD ["bash", "-lc", "npm i && npm test"]
