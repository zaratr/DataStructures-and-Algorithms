FROM python:3.9-slim

WORKDIR /workspace/python

CMD ["bash", "-lc", "python -m pip install --upgrade pip && pip install -r requirements.txt && pytest -vv"]
